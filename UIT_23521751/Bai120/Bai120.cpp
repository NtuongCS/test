#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int  n, i;
	cout << "nhap n: ";
	cin >> n;
	float at = 2;
	i = 2;
	float ahh = 0;
	while (i <= n)
	{
		ahh = 5 * at + sqrt(24 * at * at - 24);
		i++;
		at = ahh;
	}
	cout << "so hang thu " << n << " la: " << ahh;
	return 0;
}
