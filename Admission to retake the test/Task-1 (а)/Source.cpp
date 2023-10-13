#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int r = 0;
	std::cin >> n;

	while (n != 0)
	{
		r = r + (n & 1);
		n = n >> 1;
	}
	std::cout << r;

	return EXIT_SUCCESS;
}