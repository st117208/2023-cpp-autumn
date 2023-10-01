#include <iostream>

int main(int argc, char* argv[])
{
	long long a = 0;
	long long h = 0;
	std::cin >> a;
	for (int i = 1; i <= a; i++)
	{
		long long k = 1;
		long long b = 0;
		long long c = 0;
		long long s = 0;
		b = i;
		while (b != 0)
		{
			b = b / 10;
			k = k * 10;

		}
		k = k / 10;
		b = i;
		while (b != 0)
		{
			c = b % 10;
			b = b / 10;
			s = s + c * k;
			k = k / 10;
		}
		if (i == s)
		{
			h = h + 1;
		}
	}
	std::cout << h;
	return EXIT_SUCCESS;
}