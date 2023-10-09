#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int  n, i;
	cout << "nhap n: ";
	cin >> n;
	int at = 2;
	i = 2;
	int ahh = 0;
	while (i <= n)
	{
	    ahh = at + 2 * i + 1;
		i++;
		at = ahh;
	}
	cout <<"so hang thu "<<n<<" la: "<<ahh;
	return 0;
}