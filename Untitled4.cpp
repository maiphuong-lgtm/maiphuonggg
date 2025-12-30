#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3;

    cout << "Nhap luong mua thang June: ";
    cin >> m1;
    cout << "Nhap luong mua thang July: ";
    cin >> m2;
    cout << "Nhap luong mua thang August: ";
    cin >> m3;

    float tb = (m1 + m2 + m3) / 3;

    tb = (int)(tb * 100) / 100.0;

    cout << "Luong mua trung binh cua thang June, July, va August la "
         << tb << " inches.";

    return 0;
}

