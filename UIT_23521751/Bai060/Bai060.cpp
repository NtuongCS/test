#include <iostream>
using namespace std;

int main()
{
	int n;
	int tich = 1;
	cout << "Nhap so n: ";
	cin >> n;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		tich=tich*dv;
		t = t / 10;
	}
	cout << "Tich la: " << tich;

}