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
	if (a > b)
	{
		float temp = a;
		a = b;
		b = temp;
		cout << a <<" " << b;
	}
	else
		cout << a << " " << b;
	return 0;
}
