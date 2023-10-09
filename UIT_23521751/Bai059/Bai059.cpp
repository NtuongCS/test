#include <iostream>
using namespace std;

int main()
{
	int n;
	int dem = 0;
	cout << "Nhap so n: ";
	cin >> n;
	int t = n;
	while (t != 0)
	{
		dem++;
		t = t / 10;
	}
	cout << "so chu so la: " << dem;

}