#include <iostream>
using namespace std;

int main()
{
	int  n;
	int flag = 1;
	cout << "nhap n: ";
	cin >> n;
	int t = n;
	while (t != 1)
	{
		int du = t % 2;
		if (du != 0)
			flag = 0;
		t = t / 2;
	}
	if (flag == 1)
		cout << "la dang";
	else
		cout << "khong la dang ";
	return 0;
}