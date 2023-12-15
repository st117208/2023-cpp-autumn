#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
#include<cstring>
//strcat

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

char* strcat(char** lines, int h, int w)
{
	char* commonline = (char*)malloc(sizeof(char));
	int k = 0;
	for (int j = 0; j < h; ++j)
	{
		for (int i = 0; i < strlen(lines[j]); ++i)
		{
			commonline[k] = lines[j][i];
			k = k + 1;
		}
	}
	return commonline;
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
	fprintf(file, "%s%\n", strcat(lines, h, w));
	fclose(file);
	for (int i = 0; i < h; ++i)
	{
		free(lines[i]);
	}
	free(lines);
	return 0;
}