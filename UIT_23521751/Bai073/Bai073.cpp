#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int  n, i,x;
	cout << "nhap n: ";
	cin >> n;
	cout << "nhap x: ";
	cin >> x;
	i = 1;
	float s = 0;
	int t = 1;
	int m = 0;
	while (i <= n)
	{
		t = t * x;
		m = m + i;
		s = s +(float) t / m;
		i++;
	}
	cout << "ket qua la: " << s;
	return 0;
}