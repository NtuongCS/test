#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, i;
	cout << "nhap n: ";
	cin >> n;
	int s = 0;
	i = 1;
	while (i <= n)
	{
		if (n % i == 0)
		   s = s + i;
		i++;
	}
	cout <<"ket qua la: "<<s;
	return 0;
}