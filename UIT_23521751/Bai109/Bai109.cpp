
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float s = 1;
	int m = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{;
		m = m * i;
		e = (float)e / m;
		s = s + e;
		i++;
	}
	cout << "ket qua la: " << s;
	return 0;
}