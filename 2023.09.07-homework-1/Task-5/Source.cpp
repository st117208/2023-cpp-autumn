#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	std::cin >> a;
	std::cin >> b;
	c = a * b % 109;
	d = (c + 109) % 109;
	std::cout << d + 1;
	return EXIT_SUCCESS;
}