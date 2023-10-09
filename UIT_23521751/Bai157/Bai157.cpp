#include <iostream>
using namespace std;

int main()
{
	int  n, i;
	cout << "nhap n: ";
	cin >> n;
	float s = 0;
	i = 1;
	while (i <= n)
	{
		s = s + (float)1 / i;
		cout << s<<endl;
		i++;
	}
	return 0;
}