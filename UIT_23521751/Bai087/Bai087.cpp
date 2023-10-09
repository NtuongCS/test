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
	float s = x;
	int t = x;
	i = 3;
	int dau = -1;
	while (i <= 2 * n+1)
	{
		t = t * x * x;
		s = s + dau * t;
		i = i + 2;
		dau = -dau;
	}
	cout << "ket qua la: " << s;
	return 0;
}