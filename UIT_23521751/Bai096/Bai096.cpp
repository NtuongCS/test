#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int  n, i;
	cout << "nhap n: ";
	cin >> n;
	i = 1;
	int t = 1;
	float s = 0;
	while (i <= n)
	{
		t = t * i;
		s = sqrt(t + s);
		i++;
	}
	cout << "ket qua la: " << s;
	return 0;
}