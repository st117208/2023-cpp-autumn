#include <iostream>

int main(int argc, char* argv[])
{
	long long a = 0;
	long long k = 1;
	long long f = 0;
	long long z = 1;
	std::cin >> a;
	for (int i = 0; i < a; i++)
	{
		std::cout << k << " ";
		f = f + 1;
		if (f == z)
		{
			z = z + 1;
			f = 0;
			k = k + 1;
		}

	}

	return EXIT_SUCCESS;
}