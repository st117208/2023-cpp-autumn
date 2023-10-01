#include <iostream>

int main(int argc, char* argv[])
{
	long long n = 0;
	long long a1 = 1;
	long long a2 = 1;
	long long a3 = 0;
	std::cin >> n;
	if ((n == 1) || (n == 2))
	{
		std::cout << "1";
	}
	else
	{
		for (int i = 3; i <= n; i++)
		{
			a3 = a1 + a2;
			a1 = a2;
			a2 = a3;
		}
		std::cout << a3;
	}
	return EXIT_SUCCESS;
}