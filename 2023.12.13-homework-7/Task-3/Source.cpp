#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
#include<cstring>
//substr

void CountSize(char* filename, int& lines, int& maxLine)
{
	FILE* file = fopen(filename, "r");

	int currentLen = 0;
	while (!feof(file))
	{
		char c = 0;
		fscanf_s(file, "%c", &c);
		if (c == '\n')
		{
			lines++;
			currentLen = 0;
		}
		else
		{
			currentLen++;
		}
		maxLine = (maxLine > currentLen ? maxLine : currentLen);
	}
	lines++;
	fclose(file);
}

int strlen(char* str)
{
	int res = 0;
	while (str[res++] != '\0');
	return res;
}

void ReadLines(char* filename, char** lines, int h)
{
	FILE* file = fopen(filename, "r");
	for (int i = 0; i < h; ++i)
	{
		fscanf(file, "%[^\n]%*c", lines[i]);
	}
	fclose(file);
}

char* substr(char** line, int a, int b)
{
	char* subline = (char*)malloc(sizeof(char));
	int i = 0;
	i = a;
	for (int j = 0; j < b; ++j)
	{
		subline[j] = line[0][i];
		++i;
	}
	return subline;
}

int main(int argc, char** argv)
{
	int w = 0;
	int h = 0;
	int a = 0;
	int b = 0;
	int scanf(char* a);
	int scanf(char* b);
	char filename[255];
	strcpy(filename, "in.txt");
	CountSize(filename, h, w);
	char** lines = (char**)malloc(sizeof(char*) * h);
	for (int i = 0; i < h; ++i)
	{
		lines[i] = (char*)malloc(sizeof(char) * w);
	}
	ReadLines(filename, lines, h);
	FILE* file = fopen("out.txt", "w");
	fprintf(file, "%s%\n", substr(lines, a, b));
	fclose(file);
	for (int i = 0; i < h; ++i)
	{
		free(lines[i]);
	}
	free(lines);
	return 0;
}