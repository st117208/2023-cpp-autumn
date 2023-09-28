#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
	long long a = 0;
	long long k = 0;
	std::cin >> a;
	for (long long i = 1; i <= round(sqrt(a)) + 1; i++)
	{
		if (a % i == 0)
		{
			k = k + 1;
		}
	}
	k = k * 2;
	if (round(sqrt(a)) * round(sqrt(a)) == a)
		k = k - 1;
	std::cout << k;
	return EXIT_SUCCESS;
}