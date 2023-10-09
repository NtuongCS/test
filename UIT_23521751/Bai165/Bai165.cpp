#include <iostream>
using namespace std;

int main()
{
	int  n;
	cout << "nhap n: ";
	cin >> n;
	int t = 1;
	int k = 0;
	while (2 * t <= n)
	{
		t = t * 2;
		k++;
	}
	cout << "ket qua la: " << k;
	return 0;
}