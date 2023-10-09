#include <iostream>
using namespace std;

int main()
{
	int  n, dv;
	cout << "nhap n: ";
	cin >> n;
	int lc = n % 10;
	int dem = 0;
	int t = n;
	while (t != 0)
	{
		dv = t % 10;
		if (dv < lc)
		{
			lc = dv;
		}
		t = t / 10;
	}
	t = n;
	while (t != 0)
	{
		dv = t % 10;
		if (dv == lc)
			dem++;
		t = t / 10;
	}
	cout << "so chu so nho nhat la: " << dem;
	return 0;
}