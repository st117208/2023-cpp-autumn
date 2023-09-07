#include <iostream>
using namespace std;
int main()
{
	long a, b, c, d;
	cin >> a >> b;
	c = a / b;
	d = b / a;
	cout << (a * c + b * d) / (c + d);
}