#include <iostream>

int main(int argc, char* argv[])
{
	long long a = 0;
	long long b = 0;
	long long c = 0;
	long long a1 = 0;
	long long b1 = 0;
	long long k = 0;
	long long h = 0;
	bool f = false;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if ((c > a) && (c > b))
	{
		std::cout << "Impossible";
	}
	while ((a1 != c) || (b1 != c))
	{
		a1 = a;
		if (a1 <= (b - b1))
		{
			b1 = b1 + a1;
			a1 = 0;
		}
		else
		{
			a1 = a1 - (b - b1);
			b1 = a1 % b;
			a1 = 0;
		}
		if ((a1 == c) || (b1 == c))
		{
			f = true;
			break;
		}
		k = k + 1;
		if (k > 100000)
		{
			break;
		}
	}
	b1 = 0;
	if (f == true)
	{
		while ((a1 != c) || (b1 != c))
		{
			a1 = a;
			std::cout << ">A" << std::endl;
			if (a1 <= (b - b1))
			{
				b1 = b1 + a1;
				std::cout << "A>B" << std::endl;
				a1 = 0;
			}
			else
			{
				h = a1 / b;
				a1 = a1 - (b - b1);
				b1 = a1 % b;
				std::cout << "A>B" << std::endl;
				if (((a1 != c) || (b1 != c)) && (h != 0))
				{
					std::cout << "B>" << std::endl;
				}
				for (int i = 0; i < h; i++)
				{
					std::cout << "A>B" << std::endl;

				}
				a1 = 0;
			}
			if ((a1 == c) || (b1 == c))
			{
				break;
			}
		}
	}
	return EXIT_SUCCESS;
}