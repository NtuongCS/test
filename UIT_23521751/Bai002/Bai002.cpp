
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;
	float s = M_PI * r * r;
	cout <<"dien tich la: "<<s;
	return 0;

}