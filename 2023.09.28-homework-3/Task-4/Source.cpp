#include <iostream>

int main(int argc, char* argv[])
{
	long long a;
	long long b;
	long long c;
	long long d;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	for (int i = 0; i <= 1000; i++)
	{
		if ((a * i * i * i + b * i * i + c * i + d) == 0)
		{
			std::cout << i << " ";
		}
	}
	return EXIT_SUCCESS;
}