#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, x2, x4, x8, x16, x32, x64;
	cout << "nhap x: ";
	cin >> x;
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x16 = x8 * x8;
	x32 = x16 * 16;
	x64 = x32 * x32;
	cout <<"x^64= "<<x64;
	return 0;
}