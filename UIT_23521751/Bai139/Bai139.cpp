#include <iostream>
using namespace std;

int main() {
    float a, b;
    cout << "Nhap  a: ";
    cin >> a;
    cout << "Nhap  b: ";
    cin >> b;
    if (a == 0) {
        if (b == 0) {
            cout << " vo so nghiem.";
        } else {
            cout << " vo nghiem.";
        }
    } else {
        float x = -b / a;
        cout << "Nghiem  phuong trinh la x = " << x;
    }

    return 0;
}