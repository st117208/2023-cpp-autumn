#include<iostream>
#include"FunctionHeaders.h"
int main(int argc, char* argv[])
{
	int* a = nullptr;
	int l = 0;
	bool exit = false;
	std::setlocale(LC_ALL, "Russian");
	while (!exit)
	{
		{
			system("cls");
			PrintMenu();
			PrintArray(a, l);
			std::cout << std::endl;
			std::cout << "Введите номер команды: ";
		}
		int option = 0;
		{
			std::cin >> option;
			std::cout << std::endl;
		}
		{
			switch (option)
			{
			case 0:
				exit = true;
				break;
			case 1:
				PrintArray(a, l);
				system("pause");
				break;
			case 2:
			{
				int el = 0;
				std::cout << "Введите новый элемент : ";
				std::cin >> el;
				AddElement(a, l, el);
				break;
			}
			case 3:
			{
				if (a == nullptr)
				{
					std::cout << "Невозможно выполнить команду" << std::endl;
					system("pause");
				}
				else
				{
					int in = 0;
					std::cout << "Введите индекс элемента, который нужно удалить : ";
					std::cin >> in;
					if (in > l - 1)
					{
						std::cout << "В массиве нет элемента с таким индексом" << std::endl;
						system("pause");
					}
					else
					{
						std::cout << "Удалён " << DeleteElement(a, l, in) << " элемент" << std::endl;
						system("pause");
					}
				}
				break;
			}
			case 4:
			{
				if (a == nullptr)
				{
					std::cout << "Невозможно выполнить команду " << std::endl;
					system("pause");
				}
				SortArray(a, l);
				PrintArray(a, l);
				break;
			}
			case 5:
			{
				if (a == nullptr)
				{
					std::cout << "Невозможно выполнить команду" << std::endl;
					system("pause");
				}
				ReverseArray(a, l);
				PrintArray(a, l);

				break;
			}
			case 6:
			{
				if (a == nullptr)
				{
					std::cout << "Невозможно выполнить команду" << std::endl;
					system("pause");
				}
				ChangeMinMaxElements(a, l);
				PrintArray(a, l);


				break;
			}
			case 7:
			{
				if (a == nullptr)
				{
					std::cout << "Невозможно выполнить команду" << std::endl;
					system("pause");
				}
				DeleteDuplicateElements(a, l);
				PrintArray(a, l);

				break;
			}
			case 8:
			{
				int n = 0;
				std::cout << "Введите количество элементов : ";
				std::cin >> n;

				AddRandomElements(a, l, n);
				PrintArray(a, l);

				break;
			}
			default:
				std::cout << "Неизвестная команда" << std::endl;
				break;
			}
		}
	}

	return EXIT_SUCCESS;
}