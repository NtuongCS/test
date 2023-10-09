#include <iostream>
using namespace std;

int main()
{
	int n, x, y;
	cout << "nhap x: ";
	cin >> x;
	cout << "nhap y: ";
	cin >> y;
	n = x;
	while (n <= y)
	{
		if ((n % 4 == 0) && (n % 100 != 0) || n % 400 == 0)
			cout << n<<" ";
		n++;
	}
	return 0;
}