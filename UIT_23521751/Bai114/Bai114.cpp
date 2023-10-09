#include <iostream>
using namespace std;

int main()
{
	int  n, i;
	cout << "nhap n: ";
	cin >> n;
	int at = 2;
	int tt = 3;
	int pp = 7;
	i = 2;
	int ahh = 0;
	while (i <= n)
	{
		tt = tt * 3;
		pp = pp * 7;
		ahh = 5 * at + 2 * tt - 6 * pp + 12;
		i++;
		at = ahh;
	}
	cout << "so hang thu " << n << " la: " << ahh;
	return 0;
}