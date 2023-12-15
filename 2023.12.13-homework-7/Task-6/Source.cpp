#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
int strLen(char* str);
int countword(char* str, int len);
char* maxs(char* str, int len);
// word count & longest sentence

int main(int argc, char* argv[])
{
	char str[255] = "";
	int length = 0;
	FILE* f = fopen("in.txt", "r");
	fscanf(f, "%[^\n]%*c", &str);
	length = strLen(str);
	fclose(f);
	f = fopen("out.txt", "w");
	fprintf(f, "%d", countword(str, length));
	fclose(f);

	return EXIT_SUCCESS;
}

int strLen(char* str)
{
	int len = 0;
	while (str[len] != '\0')
	{
		++len;
	}
	return len;
}

int countword(char* str, int len)
{
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == ' ')
		{
			sum = sum + 1;
		}
	}
	return sum + 1;
}

char* maxs(char* str, int len)
{
	char maxstr[255] = "";
	int j = 0;
	int max = 0;
	for (int i = 0; i < len; ++i)
	{
		char strtemp[255] = "";
		if ((str[i] != '.') && (str[i] != '!') && (str[i] != '?'))
		{
			strtemp[j] = str[i];

			++j;
		}
		else
		{
			strtemp[j] = str[i];
			if (strlen(strtemp) > max)
			{
				max = strlen(strtemp);
				for (int k = 0; k <= j; ++k)
				{
					maxstr[k] = strtemp[k];
					std::cout << maxstr[k];
				}
			}
			j = 0;
		}
	}
	return maxstr;
}