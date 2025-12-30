#include <iostream>
using namespace std;

int main() {
    int ngay, thang, nam;
    cout << "Nhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam (2 chu so cuoi): ";
    cin >> nam;
    if (ngay * thang == nam) {
        cout << "Day la ngay phep thuat!";
    } else {
        cout << "Day KHONG phai la ngay phep thuat!";
    }
    return 0;
}
