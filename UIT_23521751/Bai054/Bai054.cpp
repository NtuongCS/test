#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, i;
	cout << "nhap n: ";
	cin >> n;
	int dem = 0;
	i = 2;
	while (i <= n)
	{
		if (n % i == 0)
			dem++;
		i = i + 2;
	}
	cout << "so uoc chan la: " << dem;
	return 0;
}