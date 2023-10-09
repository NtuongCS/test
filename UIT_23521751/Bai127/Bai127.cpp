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
	float lc = a;
	if (b <lc)
		lc = b;
	cout << "so nho nhat la: " << lc;
	return 0;
}