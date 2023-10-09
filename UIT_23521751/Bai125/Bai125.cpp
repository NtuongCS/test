#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	cout << a << " " << b;
	return 0;
}