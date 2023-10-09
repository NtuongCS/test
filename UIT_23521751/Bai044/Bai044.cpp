#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, i;
	cout << "nhap n: ";
	cin >> n;
	i = 1;
	float s = 0;
	while (i <= n)
	{
		s = s + (float)1 / (i * (i + 1) * (i + 2) * (i + 3));
		i++;
	}
	cout << "ket qua la: " << s;
	return 0;
}
