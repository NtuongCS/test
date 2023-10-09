#include <iostream>
using namespace std;

int main()
{
	int  n, i;
	cout << "nhap n: ";
	cin >> n;
	i = 1;
	int dem = 0;
	while (i <= n)
	{
		if (n % i == 0)
			dem++;
		i++;
	}
	if (dem == 2)
		cout << "la so nguyen to";
	else
		cout << "khong la so nguyen to";
	return 0;
}