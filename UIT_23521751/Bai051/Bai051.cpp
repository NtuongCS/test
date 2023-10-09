#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, i;
	cout << "nhap n: ";
	cin >> n;
	int t = 1;;
	i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			t = t * i;
		i++;
	}
	cout << "ket qua la: " << t;
	return 0;
}