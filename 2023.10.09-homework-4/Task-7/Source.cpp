#include <iostream>

int main(int argc, char** argv)
{
	int n = 0;
	int c = 0;
	int e = 0;
	std::cin >> n;
	int* a = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(a + i);
		if (*(a + i) > 0)
		{
			c = c + 1;
		}
	}
	int* b = (int*)malloc(sizeof(int) * c);
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) > 0)
		{
			*(b + e) = *(a + i);
			e = e + 1;
		}
	}
	for (int i = 0; i < c; ++i)
	{
		std::cout << *(b + i) << " ";
	}
	free(a);
	free(b);
	return EXIT_SUCCESS;

}