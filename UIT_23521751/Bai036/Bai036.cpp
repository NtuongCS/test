#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x,n, i;
	cout << "nhap n: ";
	cin >> n;
	cout << "nhap x: ";
	cin >> x;
	i = 1;
	int t = 1;
	while (i <= n)
	{
		t = t * x;
		i++;
	}
	cout <<"x^n="<<t;
	return 0;
}