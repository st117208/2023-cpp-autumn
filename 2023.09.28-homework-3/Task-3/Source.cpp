#include <iostream>

int main(int argc, char* argv[])
{
	long long a = 0;
	long long j = 0;
	long long k = 0;
	std::cin >> a;
	while (j * j < a)
	{
		j = j + 1;
	}
	for (long long i = 1; i <= j; i++)
	{
		if (a % i == 0)
		{
			k = k + 1;;
		}
	}
	k = k * 2;
	if (j * j == a)
		k = k - 1;
	std::cout << k;
	return EXIT_SUCCESS;
}