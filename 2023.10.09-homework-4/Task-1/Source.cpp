#include <iostream>

int main(int argc, char** argv)
{
	int n = 0;
	int c = 0;
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
	std::cout << c;
	free(a);
	return EXIT_SUCCESS;

}