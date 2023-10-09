#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int  a, b;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	int m = abs(a);
	int n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	cout << "bcnn= " << abs(a * b) / (m + n);
	return 0;
}