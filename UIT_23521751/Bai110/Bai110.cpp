#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	float s = 0;
	int dau = 1;
	float e = 4;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)4 / i;
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	cout << "ket qua la: " << s;
	return 0;
}

