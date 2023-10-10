#include <iostream>

int main(int argc, char** argv)
{
	int n = 0;
	std::cin >> n;
	n = n + 1;
	int* a = (int*)malloc(sizeof(int) * (n - 1));
	for (int i = 1; i < n; ++i)
	{
		std::cin >> *(a + i);
	}
	for (int i = 1; i < n; ++i)
	{
		if (i % 2 == 0)
		{
			std::cout << *(a + i) << " ";
		}
	}
	free(a);
	return EXIT_SUCCESS;

}