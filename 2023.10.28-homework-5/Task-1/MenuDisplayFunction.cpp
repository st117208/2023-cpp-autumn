#include "FunctionHeaders.h"
#include<iostream>

int PrintMenu()
{
	std::setlocale(LC_ALL, "Russian");
	std::cout << "0 - ����� �� ���������" << std::endl;
	std::cout << "1 - ������� ������" << std::endl;
	std::cout << "2 - �������� ������� � ������" << std::endl;
	std::cout << "3 - ������� ������� �� �������" << std::endl;
	std::cout << "4 - ������������� ������ �� �����������" << std::endl;
	std::cout << "5 - ���������� ������" << std::endl;
	std::cout << "6 - �������� ������� ������ ������������ � ��������� ����������� ������� �������" << std::endl;
	std::cout << "7 - ������� �� ������� ��� ���������" << std::endl;
	std::cout << "8 - �������� � ������ n ��������� ��������� (n �������� � ����������)" << std::endl;
	std::cout << std::endl;

	return 1;
}