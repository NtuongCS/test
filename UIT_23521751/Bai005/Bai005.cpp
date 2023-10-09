#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;
	float v = M_PI * 4 / 3 * r * r * r;
	cout <<"The tich la: "<<v;
	return 0;
}