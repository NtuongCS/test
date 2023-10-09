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
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << "so hang thu " << n << " la: " << ahh << " " << bhh;
	return 0;
}