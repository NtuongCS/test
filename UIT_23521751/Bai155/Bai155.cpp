#include <iostream>
using namespace std;

int main()
{
	int  n, i;
	cout << "nhap n: ";
	cin >> n;
	int t = 1;
	i = 0;
	while (i <= n)
	{
		t = t * 2;
		cout << t << endl;
		i++;
	}
	return 0;
}
