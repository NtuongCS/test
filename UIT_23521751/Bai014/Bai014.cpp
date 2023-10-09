#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, x2, x4, x8, x16, x32;
	cout << "nhap x: ";
	cin >> x;
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x16 = x8 * x8;
	x32 = x16 * x16;
	cout <<"x^32= "<<x32;
	return 0;
}