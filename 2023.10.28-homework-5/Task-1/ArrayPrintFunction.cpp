#include "FunctionHeaders.h"
#include<iostream>

int PrintArray(int* a, int l)
{
	if (a == nullptr)
	{
		std::cout << "Массив не имеет элементов";
	}
	else
	{
		for (int i = 0; i < l; ++i)
		{
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;
		return 1;
	}
	std::cout << std::endl;
}