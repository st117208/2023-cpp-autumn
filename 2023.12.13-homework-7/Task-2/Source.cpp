#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
#include<cstring>
//strstr

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

int strstr(char* lines1, char* lines2)
{
	int temp = 0;
	for (int i = 0; i <= strlen(lines1) - strlen(lines2); ++i)
	{
		for (int j = 0; j < strlen(lines2); ++j)
		{
			if (lines2[j] == lines1[i + j])
			{
				temp = temp + 1;
			}
		}
		if (temp == strlen(lines2))
		{
			return i;
		}
		temp = 0;
	}
	return 0;
}

int main(int argc, char** argv)
{
	int w = 0;
	int h = 0;
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
	if (strstr(lines[0], lines[1]) == 0)
	{
		fprintf(file, "%s%\n", "Strstr: Error");
	}
	else
	{
		fprintf(file, "%d", strstr(lines[0], lines[1]));

	}
	fclose(file);
	for (int i = 0; i < h; ++i)
	{
		free(lines[i]);
	}
	free(lines);
	return 0;
}