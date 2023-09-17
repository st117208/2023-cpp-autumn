#include <iostream>
int main(int argc, char* argv[])
{
	long long k = 0, a = 0, b = 0, amod = 0, i = 0, j = 0, imod = 0;
	std::cin >> a;
	k = a;
	a = 10001 + k;
	b = 10001 - k;
	i = 10001 + (k - 1);
	j = 10001 - (k - 1);
	amod = (a * (a / b) + b * (b / a)) / (a / b + b / a) - 10001;
	imod = (i * (i / j) + j * (j / i)) / (i / j + j / i) - 10001;
	std::cout << (imod * ((k * amod) % (amod + 1) + 1 + k) / 2) + 1;
}