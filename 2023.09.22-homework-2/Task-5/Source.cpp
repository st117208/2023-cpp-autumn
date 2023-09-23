#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	std::cin >> a;
	if ((a % 100 >= 5) && (a % 100 <= 20))
	{
		std::cout << a << " bochek" << std::endl;
	}
	else if ((a % 10 == 2) || (a % 10 == 3) || (a % 10 == 4))
	{
		std::cout << a << " bochki" << std::endl;
	}
	else if (a % 10 == 1)
	{
		std::cout << a << " bochka" << std::endl;
	}
	else
	{
		std::cout << a << " bochek" << std::endl;
	}
	return EXIT_SUCCESS;
}