#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n,i;
	cout << "nhap n: ";
	cin >> n;
	i = 1;
	float t = 1;
	while (i <= n)
	{
		t = t * (1 +(float) 1 / (i + 1));
		i++;
	}
	cout << "S(n)=" << t;
	return 0;

}