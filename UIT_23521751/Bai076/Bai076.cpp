#include <iostream>
using namespace std;

int main()
{
	int  n, i, x;
	cout << "nhap n: ";
	cin >> n;
	cout << "nhap x: ";
	cin >> x;
	i = 3;
	float s = 1;
	int t = 1;
	int m = 1;
	while (i <= 2 * n)
	{
		t = t * x * x;
		m = m * i * (i - 1);
		s = s + (float)t / m;
		i = i + 2;
	}
	cout << "ket qua la: " << s;
	return 0;
}