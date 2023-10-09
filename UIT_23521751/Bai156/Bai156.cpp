#include <iostream>
using namespace std;

int main()
{
	int  n, i;
	cout << "nhap n: ";
	cin >> n;
	int t = 1;
	i = 1;
	while (i <= n)
	{
		t = t * i;
		cout << t << endl;
		i++;
	}
	return 0;
}