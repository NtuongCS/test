#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, n, i;
	cout << "nhap n: ";
	cin >> n;
	cout << "nhap x: ";
	cin >> x;
	i = 3;
	int s = 0;
	int t = 1;
	while (i <= 2 * n+1)
	{
		t = t * x * x;
		s = s + t;
		i = i + 2;
	}
	cout << "ket qua la: " << s;
	return 0;
}