#include <iostream>
using namespace std;

int main()
{
	int  n, i, x;
	cout << "nhap n: ";
	cin >> n;
	cout << "nhap x: ";
	cin >> x;
	i = 1;
	int t = 1;
	float  s = 1;
	while (i <= n)
	{
		t = t * x;
		s = s + t;
		i++;
	}
	cout << "ket qua la: " << s;
	return 0;
}
