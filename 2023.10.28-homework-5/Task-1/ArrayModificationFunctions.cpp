#include"FunctionHeaders.h"
#include<iostream>
#include<ctime>

int ExpandArray(int*& a, int& l, int n)
{
	int* b = new int[l + n] { 0 };
	if (a != nullptr)
	{
		for (int i = 0; i < l; ++i)
		{
			b[i] = a[i];
		}
		delete[] a;
	}
	a = b;
	l = l + n;
	return 1;
}

int AddElement(int*& a, int& l, int el)
{
	ExpandArray(a, l, 1);
	a[l - 1] = el;
	return 1;
}

int ReverseArray(int* a, int l)
{
	if (a != nullptr)
	{
		int r = 0;
		for (int i = 0; i < (l / 2) + 1; ++i)
		{
			r = a[l - i - 1];
			a[l - i - 1] = a[i];
			a[i] = r;
		}
		return 1;
	}

}

int DeleteElement(int*& a, int& l, int in)
{
	if (a != nullptr)
	{
		if (l != 1)
		{
			int k = 0;
			int* b = new int[l - 1] { 0 };
			for (int i = 0; i < l; ++i)
			{
				if (i != in)
				{
					b[k] = a[i];
					k = k + 1;
				}
			}
			delete[] a;
			a = b;
		}
		else
		{
			int* b = nullptr;
			delete[] a;
			a = b;
		}
		--l;
		return in;
	}
}

int SortArray(int* a, int l)
{
	if (a != nullptr)
	{
		for (int i = 1; i < l; ++i)
		{
			int r = 0;
			for (int j = 0; j < l - i; ++j)
			{
				if (a[j] > a[j + 1])
				{
					r = a[j];
					a[j] = a[j + 1];
					a[j + 1] = r;
				}
			}
		}
		return 1;
	}
}

int IndexLastMinElement(int* a, int l)
{
	if (a != nullptr)
	{
		int inmin = 0;
		int min = INT_MAX;
		for (int i = 0; i < l; ++i)
		{
			if (a[i] <= min)
			{
				inmin = i;
				min = a[i];
			}
		}
		return inmin;
	}
}

int IndexFirstMaxElement(int* a, int l)
{
	if (a != nullptr)
	{
		int inmax = 0;
		int max = INT_MIN;
		for (int i = 0; i < l; ++i)
		{
			if (a[i] > max)
			{
				inmax = i;
				max = a[i];
			}
		}
		return inmax;
	}
}

int ChangeMinMaxElements(int* a, int l)
{
	if (a != nullptr)
	{
		int r = 0;
		r = a[IndexFirstMaxElement(a, l)];
		a[IndexFirstMaxElement(a, l)] = a[IndexLastMinElement(a, l)];
		a[IndexLastMinElement(a, l)] = r;
		return 1;
	}
}

int DeleteDuplicateElements(int*& a, int& l)
{
	int* b = new int[l] { 0 };
	if (a != nullptr)
	{
		int k = 0;
		for (int i = 0; i < l; ++i)
		{
			bool flag = true;
			for (int j = 0; j < i; ++j)
			{
				if (a[i] == a[j])
				{
					flag = false;
				}
			}
			if (flag == true)
			{
				b[k] = a[i];
				k = k + 1;
			}
		}
		int* c = new int[k] { 0 };
		for (int i = 0; i < k; ++i)
		{
			c[i] = b[i];
		}
		delete[] b;
		delete[] a;
		a = c;
		l = k;
	}
	return 1;
}

int AddRandomElements(int*& a, int& l, int n)
{
	ExpandArray(a, l, n);
	srand(time(0));
	for (int i = l - n; i < l; ++i)
	{
		a[i] = rand();
	}
	return 1;
}