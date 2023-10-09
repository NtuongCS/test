#include <iostream>
using namespace std;

int main()
{
	int  n, i;
	cout << "nhap n: ";
	cin >> n;
	float x;
	cout << "nhap x: ";
	cin >> x;
	float s = 1;
	int t = 1;
	i = 1;
	while (i <= n)
	{
		t = t * x;
		s = s + (i + 1) * t;
		i++;
	}
	cout << "ket qua la: " << s;
	return 0;
}