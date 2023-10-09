#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, n, i;
	cout << "nhap n; ";
	cin >> n;
	cout << "nhap x: ";
	cin >> x;
	i = 1;
	int s = 0;
	while (i <= n)
	{
		s = s + i * i * i;
		i++;
	}
	cout << "S(n)=" << s;
	return 0;
}