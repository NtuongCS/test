#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;
	float c = M_PI * 2 * r;
	cout <<"Chu vi la: "<<c;
	return 0;
}