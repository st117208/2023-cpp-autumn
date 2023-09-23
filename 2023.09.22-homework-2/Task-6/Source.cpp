#include <iostream>

int main(int argc, char* argv[])
{
	long long k = 0;
	long long m = 0;
	long long n = 0;
	long long st = 0;
	long long min = 0;
	std::cin >> k;
	std::cin >> m;
	std::cin >> n;
	if (n <= k)
	{
		min = m * 2;
	}
	else
	{
		st = n * 2;
		min = (st / k) * m;
		if (st % k != 0)
		{
			min = min + m;
		}
	}
	std::cout << min << std::endl;
	return EXIT_SUCCESS;
}