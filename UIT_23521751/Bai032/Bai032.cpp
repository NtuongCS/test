#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i, n;
	cout << "nhap n: ";
	cin >> n;
	float s = 0;
	i = 1;
	while (i <= n)
	{
		s = s + (float)1 /(i*(i+1));
		i++;
	}
	cout << "tong la: " << s;
	return 0;
}