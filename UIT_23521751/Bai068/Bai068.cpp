#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = 0;
	int i = 1;
	int t = 1;
	while (i <= n)
	{
		t = t * i;
		s = s + t;
		i++;
	}
	cout << "S(n)= " << s;
	return 0;
}