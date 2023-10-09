#include <iostream>
using namespace std;

int main()
{
	int  n, i;
	cout << "nhap n: ";
	cin >> n;
	int att = 1;
	int at = 2;
	i = 2;
	int ahh = 0;
	while (i <= n)
	{
		ahh = 4 * at + att;
		i++;
		att = at;
		at = ahh;
	}
	cout << "so hang thu " << n << " la: " << ahh;
	return 0;
}