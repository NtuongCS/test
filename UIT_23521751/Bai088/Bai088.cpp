#include <iostream>
using namespace std;

int main()
{
	int  n, i;
	cout << "nhap n: ";
	cin >> n;
	float s = 0;
	int m = 0;
	i = 1;
	int dau = 1;
	while (i <= n)
	{
		m = m + i;
		s = s + (float)dau / m;
		i++;
		dau = -dau;
	}
	cout << "ket qua la: " << s;
	return 0;
}