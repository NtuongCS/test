#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	float a, b, c, d, e;
	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float p =(float) (a + b + c)/2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << s;
	return 0;
}