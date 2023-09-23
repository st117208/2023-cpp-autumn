#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int t1 = 0;
	int t5 = 0;
	int t10 = 0;
	int t20 = 0;
	int t60 = 0;
	std::cin >> a;
	if (a >= 60)
	{
		t60 = a / 60;
		a = a % 60;
		if (a >= 36)
		{
			t60 = t60 + 1;
		}
		else
		{
			t20 = a / 20;
			a = a % 20;
			if (a >= 18)
			{
				t20 = t20 + 1;
			}
			else
			{
				t10 = a / 10;
				a = a % 10;
				if (a >= 9)
				{
					t10 = t10 + 1;
				}
				else
				{
					t5 = a / 5;
					t1 = a % 5;
				}
			}
		}
	}
	std::cout << t1 << " " << t5 << " " << t10 << " " << t20 << " " << t60 << std::endl;
	return EXIT_SUCCESS;
}