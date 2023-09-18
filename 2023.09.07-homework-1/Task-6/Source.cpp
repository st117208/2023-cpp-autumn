#include <iostream>

int main(int argc, char* argv[])
{
	long a = 0;
	long b = 0;
	long c = 0;
	long d = 0;
	std::cin >> a;
	std::cin >> b;
	c = a / b;
	d = b / a;
	std::cout << (a * c + b * d) / (c + d);
	return EXIT_SUCCESS;
}