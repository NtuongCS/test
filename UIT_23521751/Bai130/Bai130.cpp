#include <iostream>
using namespace std;

int main()
{
	float x, y, z;
	cout << "nhap x: ";
	cin >> x;
	cout << "nhap y: ";
	cin >> y;
	cout << "nhap z: ";
	cin >> z;
	if (x + y > z && x + z > y && y + z > x)
		cout << "la tam giac";
	else
		cout << "khong la tam giac";
	return 0;
}
