#include <iostream>
using namespace std;

int main()
{
	int  n, i;
	cout << "nhap n: ";
	cin >> n;
	int at = 2;
	int bt = 1;
	i = 2;
	int ahh = 0;
	int bhh = 0;
	while (i <= n)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = at * bt * 2;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << "so hang thu " << n << " la: " << ahh << " " << bhh;
	return 0;
}