#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i, n, s;
	cout << "nhap n: ";
	cin >> n;
	s = 0;
	i = 1;
	while (i <= n)
	{
		s = s + i*i;
		i++;
	}
	cout <<"tong la: "<< s;
	return 0;
}