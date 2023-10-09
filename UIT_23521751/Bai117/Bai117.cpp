#include <iostream>
using namespace std;

int main()
{
	int  n, i;
	cout << "nhap n: ";
	cin >> n;
	int att = -1;
	int at = 3;
	int t = 2;
	i = 2;
	int ahh = 0;
	while (i <= n)
	{
		t = t * 2;
		ahh = 5 * t + 5 * at - att;
		i++;
		att = at;
		at = ahh;
	}
	cout << "so hang thu " << n << " la: " << ahh;
	return 0;
}
	    