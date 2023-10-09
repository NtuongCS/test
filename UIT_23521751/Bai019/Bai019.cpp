#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, x2, x4, x8, x12,x13;
	cout << "nhap x: ";
	cin >> x;
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x12 = x8 * x4;
	x13 = x12 * x;
	cout <<"x^13="<<x13;
	return 0;
}