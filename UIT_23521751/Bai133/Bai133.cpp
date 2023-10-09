#include <iostream>
using namespace std;

int main()
{
    float x, y, z;
    cout << "Nhap do dai canh x: ";
    cin >> x;
    cout << "Nhap do dai canh y: ";
    cin >> y;
    cout << "Nhap do dai canh z: ";
    cin >> z;
     if (x + y <= z || x + z <= y || y + z <= x)
        cout << "Khong phai tam giac.";
     if (x == y && y == z) {
         cout << " deu.";
     }
    
    else if (x == y || y == z || x == z) {
        if (x * x == y * y + z * z || y * y == x * x + z * z || z * z == x * x + y * y) {
            cout << " vuong can.";
        }
        else {
            cout << "can";
        }
   }
    else if (x * x == y * y + z * z || y * y == x * x + z * z || z * z == x * x + y * y) {
         cout << "vuong";
    }
    else {
        cout << " thuong.";
    }

    return 0;
}