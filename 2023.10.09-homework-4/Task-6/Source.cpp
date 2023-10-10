#include <iostream>

int main(int argc, char** argv)
{
	int n = 0;
	std::cin >> n;
	int max = 0;
	std::cin >> max;
	int min = 0;
	min = max;
	int imax = 0;
	int imin = 0;
	int* a = (int*)malloc(sizeof(int) * n);
	for (int i = 1; i < n; ++i)
	{
		std::cin >> *(a + i);
	}
	for (int i = 1; i < n; ++i)
	{
		if (*(a + i) >= max)
		{
			max = *(a + i);
			imax = i;
		}
		if (*(a + i) < min)
		{
			min = *(a + i);
			imin = i;
		}
	}
	*(a + imin) = max;
	*(a + imax) = min;
	for (int i = 0; i < n; ++i)
	{
		std::cout << *(a + i) << " ";
	}
	free(a);
	return EXIT_SUCCESS;

}