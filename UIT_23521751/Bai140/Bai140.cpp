#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cout << "Nhap  a: ";
    cin >> a;
    cout << "Nhap  b: ";
    cin >> b;
    cout << "Nhap  c: ";
    cin >> c;
    float delta = b * b - 4 * a * c;
    if (delta < 0)
        cout << " vo nghiem.";
    else if (delta == 0) {
        float x = -b / (2 * a);
        cout << "Phuong trinh co nghiem kep x = " << x;
    }
    else {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Phuong trinh co hai nghiem: ";
        cout << "x1 = " << x1;
        cout << "x2 = " << x2;
    }

    return 0;
}