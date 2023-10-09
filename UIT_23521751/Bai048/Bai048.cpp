#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, n;
	int i = 1;
	cout << "nhap n: ";
	cin >> n;
	cout << "nhap x: ";
	cin >> x;
	float t = x;
	i = 1;
	while (i <= n)
	{
		t = t * (x + i);
		i++;
	}
	cout << t;
	return 0;
}
