#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, x2, x4, x8, x10,x11;
	cout << "nhap x: ";
	cin >> x;
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x10 = x8 * x2;
	x11 = x10 * x;
	cout <<"x^10="<<x10;
	return 0;
}