#include<iostream>

struct Node
{
	int data;
	Node* next;
	Node(int data, Node* next = nullptr) : data(data), next(next) {}
	Node(const Node& node) : data(node.data), next(nullptr) {}
	~Node() { data = 0; next = nullptr; }
	friend std::ostream& operator<<(std::ostream& stream, Node*& node)
	{
		stream << node->data << " ";
		return stream;
	}
};

class LinkedList
{
public:
	LinkedList() : head(nullptr) {}
	~LinkedList() { dispose(); }
	void PushHead(int data);
	void Insert(int index, int data);
	void PushTail(int data);
	int PopHead();
	int Extract(int index);
	int PopTail();
	bool IsEmpty() { return head == nullptr; }
	int Length();
	int Data(int index);
	void swap(int ia, int ib);
	void sort();
	friend std::ostream& operator<<(std::ostream& stream, const LinkedList& list);
private:
	Node* head;
	int PopData(Node* node);
	void dispose();
	bool indexValid(int index);
	void swapWithHead(int index);
	void swapWithTail(int index);
	void swapHeadTail();
};

int main(int argc, char* argv[])
{
	LinkedList list;

	list.PushHead(3); list.PushHead(4); list.PushHead(1); list.PushHead(2);
	list.PushHead(7); list.PushHead(5); list.PushHead(8); list.PushHead(6);
	std::cout << list << std::endl;
	list.sort();
	std::cout << list << std::endl;
	list.swap(0, 7);
	std::cout << list << std::endl;
	list.swap(6, 7);
	std::cout << list << std::endl;
	list.swap(1, 2);
	std::cout << list << std::endl;
	list.swap(5, 7);
	std::cout << list << std::endl;
	list.swap(2, 4);
	std::cout << list << std::endl;
	list.swap(5, 6);
	std::cout << list << std::endl;

	return EXIT_SUCCESS;
}

void LinkedList::PushHead(int data)
{
	head = new Node(data, head);
}

void LinkedList::Insert(int index, int data)
{
	if (index == 0)
	{
		return PushHead(data);
	}
	if (index == Length())
	{
		return PushTail(data);
	}
	if (indexValid(index))
	{
		Node* tmp = head;
		for (int i = 0; i < index - 1; ++i)
		{
			tmp = tmp->next;
		}
		tmp->next = new Node(data, tmp->next);
	}
}

void LinkedList::PushTail(int data)
{
	if (IsEmpty())
	{
		return PushHead(data);
	}
	Node* tmp = head;
	while (tmp->next != nullptr)
	{
		tmp = tmp->next;
	}
	tmp->next = new Node(data);
}

int LinkedList::PopHead()
{
	if (head == nullptr)
	{
		return -1;
	}
	Node* tmp = head;
	head = head->next;
	int res = tmp->data;
	delete tmp;
	return res;
}

int LinkedList::Extract(int index)
{
	if (index == 0)
	{
		return PopHead();
	}
	if (index == Length() - 1)
	{
		return PopTail();
	}
	if (!indexValid(index))
	{
		return -1;
	}
	Node* tmp = head;
	for (int i = 0; i < index - 1; ++i)
	{
		tmp = tmp->next;
	}
	Node* nres = tmp->next;
	tmp->next = tmp->next->next;
	int res = nres->data;
	delete nres;
	return res;
}

int LinkedList::PopTail()
{
	if (IsEmpty())
	{
		return -1;
	}
	if (head->next == nullptr)
	{
		return PopHead();
	}
	Node* tmp = head;
	while (tmp->next->next != nullptr)
	{
		tmp = tmp->next;
	}
	int res = tmp->next->data;
	delete tmp->next;
	tmp->next = nullptr;
	return res;
}

int LinkedList::Length()
{
	int len = 0;
	Node* tmp = head;
	while (tmp != nullptr)
	{
		tmp = tmp->next;
		++len;
	}
	return len;
}

void LinkedList::dispose()
{
	while (!IsEmpty())
	{
		PopHead();
	}
}

bool LinkedList::indexValid(int index)
{
	return (0 <= index && index < Length());
}

int LinkedList::PopData(Node* node)
{
	int tmp = node->data;
	delete node;
	return tmp;
}

int LinkedList::Data(int index)
{
	Node* tmp = head;
	if (!indexValid(index))
	{
		return -1;
	}
	for (int i = 0; i < index; ++i)
	{
		tmp = tmp->next;
	}
	return tmp->data;

}

void LinkedList::sort()
{
	for (int i = 0; i < Length(); ++i)
	{
		for (int j = 0; j < Length(); ++j)
		{
			if (Data(i) < Data(j))
			{
				swap(i, j);
			}
		}
	}
}

void LinkedList::swap(int ia, int ib)
{
	if (ia == ib)
	{
		return;
	}
	if (ia > ib)
	{
		return swap(ib, ia);
	}
	if (ia == 0)
	{
		return swapWithHead(ib);
	}
	if (ib == Length() - 1)
	{
		return swapWithTail(ia);
	}
	if ((ia == 0) && (ib == Length() - 1))
	{
		return swapHeadTail();
	}
	Node* tmp = head;
	Node* pretmp1 = head;
	Node* pretmp2 = head;
	Node* tmp1 = head;
	Node* tmp2 = head;
	Node* nextmp1 = head;
	Node* nextmp2 = head;
	for (int i = 0; i < Length(); ++i)
	{
		if ((i + 1) == ia)
		{
			pretmp1 = tmp;
			tmp1 = tmp->next;
			nextmp1 = tmp1->next;
		}
		if ((i + 1) == ib)
		{
			pretmp2 = tmp;
			tmp2 = tmp->next;
			nextmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	if (ib - ia == 1)
	{
		pretmp1->next = tmp2;
		tmp2->next = tmp1;
		tmp1->next = nextmp2;
	}
	else
	{
		pretmp1->next = tmp2;
		tmp2->next = nextmp1;
		pretmp2->next = tmp1;
		tmp1->next = nextmp2;
	}
	delete tmp;
}

void LinkedList::swapWithHead(int index)
{
	Node* tmpHead = head;
	head = head->next;
	Node* tmp = head;
	for (int i = 0; i < index - 1; ++i)
	{
		tmp = tmp->next;
	}
	tmpHead->next = tmp->next;
	tmp->next = tmpHead;
	if (index != 1)
	{
		tmp = head;
		for (int i = 0; i < index - 2; ++i)
		{
			tmp = tmp->next;
		}
		Node* newHead = tmp->next;
		tmp->next = tmp->next->next;
		newHead->next = head;
		head = newHead;
	}
}

void LinkedList::swapWithTail(int index)
{
	Node* tail = head;
	while (tail->next != nullptr)
	{
		tail = tail->next;
	}
	Node* preTail = head;
	while (preTail->next->next != nullptr)
	{
		preTail = preTail->next;
	}
	Node* pretmp = head;
	for (int i = 0; i < index - 1; ++i)
	{
		pretmp = pretmp->next;
	}
	Node* tmp = head;
	tmp = pretmp->next;
	Node* nextmp = head;
	nextmp = tmp->next;
	if (index == Length() - 2)
	{
		pretmp->next = tail;
		tail->next = tmp;
		tmp->next = nullptr;
	}
	else
	{
		tmp->next = nullptr;
		tail->next = nextmp;
		pretmp->next = tail;
		preTail->next = tmp;
	}
}

void LinkedList::swapHeadTail()
{
	Node* tail = head;
	while (tail->next != nullptr)
	{
		tail = tail->next;
	}
	Node* preTail = head;
	while (preTail->next->next != nullptr)
	{
		preTail = preTail->next;
	}
	Node* tmpHead = head;
	tail->next = tmpHead->next;
	tmpHead->next = nullptr;
	preTail->next = tmpHead;
	head = tail;
}

std::ostream& operator<<(std::ostream& stream, const LinkedList& list)
{
	Node* tmp = list.head;
	while (tmp != nullptr)
	{
		stream << tmp << " ";
		tmp = tmp->next;
	}
	return stream;
}