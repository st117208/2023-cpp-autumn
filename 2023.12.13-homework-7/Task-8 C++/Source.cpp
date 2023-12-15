#include<iostream>
#include<fstream>
#include<string>
//palindroms

bool palindrome(std::string s)
{
	int count = 0;
	for (int i = 0; i < ((size(s) - 1) / 2); ++i)
	{
		if (s[i] == s[(size(s) - 1) - i - 1])
		{
			count = count + 1;
		}
	}
	if (count == ((size(s) - 1) / 2))
	{
		return 1;
	}
	return 0;
}

int main(int argc, char* argv[])
{
	std::ifstream fin("in.txt");
	std::string str;
	std::string str2;
	while (!fin.eof())
	{
		std::getline(fin, str2);
		str = str + str2 + ' ';
	}
	std::ofstream fout("out.txt");
	if (palindrome(str) == 1)
	{
		fout << "Yes" << std::endl;
	}
	else
	{
		fout << "No" << std::endl;

	}
	fout.close();

	return EXIT_SUCCESS;
}