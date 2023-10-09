#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, x2, x4, x8, x16, x15;
	cout << "nhap x: ";
	cin >> x;
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x16 = x8 * x8;
	x15 =(float) x16 / x;
	cout <<"x^15="<<x15;
	return 0;
}