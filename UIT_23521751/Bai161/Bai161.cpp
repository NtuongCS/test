#include <iostream>
using namespace std;

int main()
{
	int  n, dv, hc;
	int flag = 1;
	cout << "nhap n: ";
	cin >> n;
	int t = n;
	while (t >= 10)
	{
		dv = t % 10;
		hc = (t / 10) % 10;
		if (hc > dv)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "tang";
	else
		cout << "khong tang ";
	return 0;
}

		