#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, x2, x4, x8, x12, x14;
	cout << "nhap x: ";
	cin >> x;
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x12 = x8 * x4;
	x14 = x12 * x2;
	cout <<"x^14="<<x14;
	return 0;
}