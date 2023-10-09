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
	float s = 0;
	float t = x;
	i = 1;
	while (i <= n)
	{
		t =sin(t);
		s = s + t;
		i++;
	}
	cout << "ket qua la: " << s;
	return 0;
}