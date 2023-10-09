#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, n, i;
	cout << "nhap n: ";
	cin >> n;
	i = 1;
	float s = 0;
	while (i <= n)
	{
		s = s + i * (i + 1)*(i+2);
		i++;
	}
	cout <<"ket qua la: "<<s;
	return 0;
}