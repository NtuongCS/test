#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int  n, i;
	cout << "nhap n: ";
	cin >> n;
	i = n;
	float s = 0;
	while (i > n)
	{
		s = sqrt(i + s);
		i = i - 1;;
	}
	cout << "ket qua la: " << s;
	return 0;
}