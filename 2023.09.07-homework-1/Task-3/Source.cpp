#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream f("INPUT.TXT");
	ofstream g("OUTPUT.TXT");
	long long a, b;
	f >> a;
	b = (a / 10);
	a = b * b + b;
	a = a * 100 + 25;
	g << a;
}
