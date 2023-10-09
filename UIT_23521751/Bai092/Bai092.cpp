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
	float s = -1;
	int t = 1;
	int m = 1;
	i = 3;
	int dau = 1;
	while (i <= 2 * n+1)
	{
		t = t * x * x;
		m = m * i * (i - 1);
		s = s + (float)dau * t / m;
		i = i + 1;
		dau = -dau;
	}
	cout << "ket qua la: " << s;
	return 0;
}