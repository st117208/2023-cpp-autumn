#include<iostream>
#include<cmath>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			std::cout << abs(n + 1 - j - ((i % 2) * (n + 1))) << " ";
		}
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}