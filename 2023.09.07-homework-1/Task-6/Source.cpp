#include <iostream>
int main(int argc, char* argv[])
{
	long a = 0, b = 0, c = 0, d = 0;
	std::cin >> a >> b;
	c = a / b;
	d = b / a;
	std::cout << (a * c + b * d) / (c + d);
}