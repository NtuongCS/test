#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i, n;
	cout << "nhap n: ";
	cin >> n;
	float s = 0;
	i = 2;
	while (i <= n)
	{
		s = s + (float)1 / i;
		i = i + 2;
	}
	cout << "tong la: " << s;
	return 0;
}