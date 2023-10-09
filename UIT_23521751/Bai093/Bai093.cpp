#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int  n, i;
	cout << "nhap n: ";
	cin >> n;
	i = 1;
	float s = 0;
	while (i <= n)
	{
		s = sqrt(2 + s);
		i++;
	}
	cout << "ket qua la: " << s;
	return 0;
}
