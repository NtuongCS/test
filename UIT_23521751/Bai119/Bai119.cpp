#include <iostream>
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
		ahh = (float)(at * at + 2) / (2 * at);
		i++;
		at = ahh;
	}
	cout << "so hang thu " << n << " la: " << ahh;
	return 0;
}
