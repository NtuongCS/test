#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "nhap x: ";
	cin >> x;
	float f = 0;
	if (x >= 5)
		 f = 2 * x * x + 5 * x + 9;
	else
		 f = -2 * x * x + 4 * x - 9;
	cout <<"gia tri ham so la: "<<f;
	return 0;
}