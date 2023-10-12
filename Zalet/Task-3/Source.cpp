#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	while (n > 0)
	{
		std::cout << n % 10;
		n = n / 10;
	}
	if (n == 0)
	{
		std::cout << 0;
	}

	return EXIT_SUCCESS;
}