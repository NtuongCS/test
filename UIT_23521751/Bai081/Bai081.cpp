#include <iostream>
using namespace std;

int main()
{
	int  n, i;
	float x;
	cout << "nhap n: ";
	cin >> n;
	cout << "nhap x: ";
	cin >> x;
	float s = 0;
	int m = 1;
	i = 1;
	while (i <= n)
	{
		m = m * (x+i);
		s = s + (float) 1/m;
		i++;
	}
	cout << "ket qua la: " << s;
	return 0;
}