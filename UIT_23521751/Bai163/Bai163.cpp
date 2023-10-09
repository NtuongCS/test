#include <iostream>
using namespace std;

int main()
{
	int  n;
	cout << "nhap n: ";
	cin >> n;
	int t = n;
	if (t % 2 == 0)
		t = t / 2;
	cout << "uoc so le lon nhat la: " << t;
	return 0;
}
