#include <iostream>

int main(int argc, char* argv[])
{
	long long a = 0;
	long long k = 1;
	long long b = 0;
	long long c = 0;
	long long s = 0;
	std::cin >> a;
	b = a;
	while (b != 0)
	{
		b = b / 10;
		k = k * 10;

	}
	k = k / 10;
	while (a != 0)
	{
		c = a % 10;
		a = a / 10;
		s = s + c * k;
		k = k / 10;
	}
	std::cout << s;
	return EXIT_SUCCESS;
}