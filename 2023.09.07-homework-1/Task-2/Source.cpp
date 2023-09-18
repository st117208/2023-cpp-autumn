#include <iostream>

int main(int argc, char* argv[])
{
	long long k = 0;
	long long a = 0;
	long long b = 0;
	long long amod = 0;
	long long i = 0;
	long long j = 0;
	long long imod = 0;
	long long otv = 0;
	std::cin >> a;
	k = a;
	a = 10001 + k;
	b = 10001 - k;
	i = 10001 + (k - 1);
	j = 10001 - (k - 1);
	amod = (a * (a / b) + b * (b / a)) / (a / b + b / a) - 10001;
	imod = (i * (i / j) + j * (j / i)) / (i / j + j / i) - 10001;
	otv = (imod * ((k * amod) % (amod + 1) + 1 + k) / 2) + 1;
	std::cout << otv;
	return EXIT_SUCCESS;
}