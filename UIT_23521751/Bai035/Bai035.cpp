#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, i;
	cout << "nhap n: ";
	cin >> n;
	i = 1;
	int t = 1;
	while (i <= n)
	{
		t = t * i;
		i++;
	}
	cout << t;
	return 0;
}