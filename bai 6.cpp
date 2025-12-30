#include <iostream>
using namespace std;

int main() {
    float khoiLuong, trongLuong;
    cout << "Nhap khoi luong cua vat (kg): ";
    cin >> khoiLuong;
    trongLuong = khoiLuong * 9.8;
    cout << "Trong luong cua vat la: " << trongLuong << endl;
    if (trongLuong > 100) {
        cout << "Vat qua nang." << endl;
    } else if (trongLuong < 10) {
        cout << "Vat qua nhe." << endl;
    } else {
        cout << "Trong luong cua vat o muc binh thuong." << endl;
    }
    return 0;
}
