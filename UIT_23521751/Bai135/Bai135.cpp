#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	if ((n % 4 == 0) && (n % 100 != 0) || n % 400 == 0)
		cout << "nhuan";
	else
		cout << "khong nhuan";
	return 0;
}