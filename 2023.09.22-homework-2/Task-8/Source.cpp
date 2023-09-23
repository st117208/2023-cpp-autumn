#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int f = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if (a > b)
	{
		f = a;
		a = b;
		b = f;
	}
	if (b > c)
	{
		f = b;
		b = c;
		c = f;
	}
	if (a > b)
	{
		f = a;
		a = b;
		b = f;
	}
		std::cout << a << " " << b << " " << c << std::endl;
	return EXIT_SUCCESS;
}