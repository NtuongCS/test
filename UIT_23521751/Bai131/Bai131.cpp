#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float xa, ya, xb, yb, xc, yc;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	float a = sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
	float b = sqrt((xc - xa) * (xc - xa) + (yc - ya * (yc - ya)));
	float c = sqrt((xc - xb) * (xc - xb) + (yc - yb) * (yc - yb));
	if (a + b > c && a + c > b && b+c>a)
		cout << "la tam giac";
	else
		cout << "khong la tam giac";
	return 0;
}