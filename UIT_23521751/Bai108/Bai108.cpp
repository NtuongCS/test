#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x;
	cout << "nhap x: ";
	cin >> x;;
	float s = 1;
	float t = 1;
	int m = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		t = t * x;
		m = m * i;
		e = (float)t / m;
		s = s + e;
		i++;
	}
	cout << "ket qua la: " << s;
	return 0;

}