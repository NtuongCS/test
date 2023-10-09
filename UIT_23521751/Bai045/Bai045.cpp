#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, i;
	cout << "nhap n: ";
	cin >> n;
	float s = 0;
	i = 1;
	while (i <= n)
	{
		s = s + (float)1 / (sqrt(i) + sqrt(i + 1));
		i++;
	}
	cout << "ket qua la: " << s;
	return 0;
}