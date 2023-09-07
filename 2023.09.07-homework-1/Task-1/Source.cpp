#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream f("INPUT.TXT");
	ofstream g("OUTPUT.TXT");
	int a, b, c;
	f >> a, b;
	c = a + b;
	g << c;
}