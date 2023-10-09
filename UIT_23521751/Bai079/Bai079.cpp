#include <iostream>
using namespace std;

int main()
{
	int  n, i;
	cout << "nhap n: ";
	cin >> n;
	float s = 0;
	i = 1;
	int t = 1;
	while (i <= n)
	{
		t = t * i;
		s = s + i * t;
		i++;
	}
	cout << "ket qua la: " << s;
	return 0;
}
