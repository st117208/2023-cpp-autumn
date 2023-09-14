#include <iostream>

int main(int argc, char* argv[])
{
	long a, b, c, d;
	std::cin >> a >> b;
	c = a / b;
	d = b / a;
	std::cout << (a * c + b * d) / (c + d);
}