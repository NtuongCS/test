#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	cout << "nhap c: ";
	cin >> c;
	if (a > b)
	{
		float temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		float temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		float temp = b;
		b = c;
		c = temp;
	}
	cout << a << b << c;
	return 0;
}
