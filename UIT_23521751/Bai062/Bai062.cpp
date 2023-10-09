#include <iostream>
using namespace std;

int main()
{
	int n;
	int s = 0;
	cout << "Nhap so n: ";
	cin >> n;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv%2==0)
			s= s + dv;
		t = t / 10;
	}
	cout << "Tong la: " << s;

}