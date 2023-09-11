#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream f("INPUT.TXT");
	ofstream g("OUTPUT.TXT");
	long long k, a, b, amod, i, j, imod;
	f >> a;
	k = a;
	a = 10001 + k;
	b = 10001 - k;
	i = 10001 + (k - 1);
	j = 10001 - (k - 1);
	amod = (a * (a / b) + b * (b / a)) / (a / b + b / a) - 10001;
	imod = (i * (i / j) + j * (j / i)) / (i / j + j / i) - 10001;
	g << (imod * ((k * amod) % (amod + 1) + 1 + k) / 2) + 1;
}