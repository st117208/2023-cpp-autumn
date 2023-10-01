#include <iostream>

int main(int argc, char* argv[])
{
	long long a = 0;
	long long b = 0;
	std::cin >> a;
	std::cin >> b;
	while (a > b)
	{
		if (a >= b * 2)
		{
			if (a % 2 != 0)
			{
				a = a - 1;
				std::cout << "-1" << std::endl;
			}
			a = a / 2;
			std::cout << ":2" << std::endl;
		}
		else
		{
			a = a - 1;
			std::cout << "-1" << std::endl;
		}
	}
	return EXIT_SUCCESS;
}