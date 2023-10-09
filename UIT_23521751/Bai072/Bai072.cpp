#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, i;
	cout << "nhap n: ";
	cin >> n;
	float s = 0;
	int m = 0;
	i = 1;
	while (i <= n)
	{
		m = m + i;
		s = s + (float) 1 / m;
		i++;
	}
	cout << "ket qua la: " << s;
	return 0;
}