#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int  n, i, k;
	cout << "nhap n: ";
	cin >> n;
	cout << "nhap k: ";
	cin >> k;
	float s = 0;
	i =1;
	while (i <= n)
	{
		s = s + pow(i, k);
		i++;
	}
	cout << "ket qua la: " << s;
	return 0;
}