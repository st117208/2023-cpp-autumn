#include <iostream>

int main(int argc, char* argv[])
{
	long long a = 0;
	long long b = 0;
	std::cin >> a;
	b = (a / 10);
	a = b * b + b;
	a = a * 100 + 25;
	std::cout << a;
	return EXIT_SUCCESS;
}
