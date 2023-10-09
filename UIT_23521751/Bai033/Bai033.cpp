#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i, n;
	cout << "nhap n: ";
	cin >> n;
	float s = 0;
	i = 1;
	while (i <= n)
	{
		s = s + (float)i / (i * (i + 1));
		i++;
	}
	cout << s;
	return 0;
}