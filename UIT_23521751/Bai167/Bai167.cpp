#include <iostream>
using namespace std;

int main()
{
	int  n;
	cout << "nhap n: ";
	cin >> n;
	int s = 0;
	int k = 0;
	while (s + k + 1 < n)
	{
		k++;
		s = s + k;
	}
	cout << "ket qua la: " << k;
	return 0;
}

