#include <iostream>
using namespace std;

int main()
{
	int  n;
	int flag = 1;
	cout << "nhap n: ";
	cin >> n;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "la so toan chan";
	else
		cout << "khong toan chan";
	return 0;
}
