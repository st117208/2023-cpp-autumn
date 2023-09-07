#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream f("INPUT.TXT");
	ofstream g("OUTPUT.TXT");
	int a;
	f >> a;
	g << a * 100 + 90 + (9 - a);
}