#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, x2, x4, x8, x9;
	cout << "nhap x: ";
	cin >> x;
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x9 = x8 * x;
	cout <<"x^9="<<x9;
	return 0;
}