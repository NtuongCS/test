#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, x2, x4, x6;
	cout << "nhap x: ";
	cin >> x;
	x2 = x * x;
	x4 = x2 * x2;
	x6 = x4 * x2;
	cout <<"x^6= "<<x6;
	return 0;
}