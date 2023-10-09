#include <iostream>
using namespace std;

int main()
{
	int  n, i;
	cout << "nhap n: ";
	cin >> n;
	int at = 2;
	i = 2;
	float ahh = 0;
	while (i<=n)
	{
		ahh = (float)(-9 * at - 24) / (5 * at + 13);
		i++;
	}
	cout << "so hang thu " << n << " la: " << ahh;
	return 0;
}
