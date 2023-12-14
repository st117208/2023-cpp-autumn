#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
#include<cstring>

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

bool isLetter(char c)
{
	return (c >= 'à' && c <= 'ÿ') || (c >= 'À' && c <= 'ß') ||
		(c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isSyntax(char c)
{
	return ((c == '.') || (c == ',') || (c == ':') || (c == ';') || (c == '!') || (c == '?'));
}

int strcmp(char* lines1, char* lines2)
{
	int minlen = 0;
	if (strlen(lines1) < strlen(lines2))
	{
		minlen = strlen(lines1);
	}
	else
	{
		minlen = strlen(lines2);
	}
	for (int i = 0; i < minlen; ++i)
	{
		if (lines1[i] != lines2[i])
		{
			if (lines1[i] > lines2[i])
			{
				return 1;
			}
			if (lines1[i] < lines2[i])
			{
				return 2;
			}
		}
	}
	if (strlen(lines1) > strlen(lines2))
	{
		return 1;
	}
	else
	{
		return 2;
	}
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
	fprintf(file, "%s%\n", strcmp(lines[0], lines[1]));
	fclose(file);
	for (int i = 0; i < h; ++i)
	{
		free(lines[i]);
	}
	free(lines);
	return 0;
}