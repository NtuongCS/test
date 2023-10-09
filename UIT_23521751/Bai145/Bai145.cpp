#include <iostream>
using namespace std;

int main()
{
	int  n, i;
	int flag = 0;
	cout << "nhap n: ";
	cin >> n;
	i = 1;
	while (i <= n)
	{
		if (i* i ==n)
			flag = 1;
		i++;
	}
	if (flag == 1)
		cout << "la so CP";
	else
		cout << "khong phai so CP";
	return 0;
}