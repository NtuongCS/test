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
		s = s + sqrt(1 + (float)1 / (i * i) + (float)1 / ((i * 1) * (i + 1)));
		i++;
    }
	cout << "ket qua la: " << s;
	return 0;
}