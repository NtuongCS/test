#include <iostream>
using namespace std;

int main()
{
	int  n, i;
	cout << "nhap n: ";
	cin >> n;
	float x;
	cout << "nhap x: ";
	cin >> x;
	float s = 0;
	int t = 1;
	int m = 0;
	i = 1;
	int dau = -1;
	while (i <= n)
	{
		t = t * x;
		m = m * i;
		s = s + (float) dau * t / m;
		i = i + 1;
		dau = -dau;
	}
	cout << "ket qua la: " << s;
	return 0;
}