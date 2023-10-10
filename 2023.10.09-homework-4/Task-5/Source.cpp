#include <iostream>

int main(int argc, char** argv)
{
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(a + i);
	}
	for (int i = 0; i < n / 2; ++i)
	{
		int k = 0;
		k = *(a + i);
		*(a + i) = *(a + (n - 1 - i));
		*(a + (n - 1 - i)) = k;
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << *(a + i) << " ";
	}
	free(a);
	return EXIT_SUCCESS;

}