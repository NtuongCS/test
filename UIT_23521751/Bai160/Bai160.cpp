#include <iostream>
using namespace std;

int main()
{
	int  n, dv;
	cout << "nhap n: ";
	cin >> n;
	int dem = 0;
	int dt = n;
	while (dt >= 10)
		dt = dt / 10;
	int t = n;
	while (t != 0)
	{
		dv = t % 10;
		if (dv == dt)
			dem++;
		t = t / 10;
	}
	cout << "so chu so dau tien la: " << dem;
	return 0;
}