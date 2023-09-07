#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream f("INPUT.TXT");
	ofstream g("OUTPUT.TXT");
	int a, b, c, d;
	f >> a >> b;
	c = a * b % 109;
	d = (c + 109) % 109;
	g << d + 1;
}