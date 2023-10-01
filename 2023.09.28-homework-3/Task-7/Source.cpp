#include <iostream>

int main(int argc, char* argv[])
{
	long long n = 0;
	long long k = 0;
	long long s = 1;
	std::cin >> n;
	if (n == 1)
	{
		std::cout << "0";
	}
	else
	{
		while (s * 2 < n)
		{
			k = k + 1;
			s = s * 2;
		}
		std::cout << k + 1;
	}
	return EXIT_SUCCESS;
}