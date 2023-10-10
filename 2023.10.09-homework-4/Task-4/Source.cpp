#include <iostream>

int main(int argc, char** argv)
{
	int n = 0;
	int j = 0;
	std::cin >> n;
	std::cin >> j;
	int* a = (int*)malloc(sizeof(int) * n);
	for (int i = 1; i < n; ++i)
	{
		std::cin >> *(a + i);
	}
	for (int i = 1; i < n; ++i)
	{
		if (*(a + i) > j)
		{
			j = *(a + i);
		}
	}
	std::cout << j;
	free(a);
	return EXIT_SUCCESS;

}