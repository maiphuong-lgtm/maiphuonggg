#include <iostream>
using namespace std;

int main() {
    int nam, nu;
    int tong;
    float tiLeNam, tiLeNu;

    cout << "Nhap so luong nam: ";
    cin >> nam;
    cout << "Nhap so luong nu: ";
    cin >> nu;

    tong = nam + nu;

    tiLeNam = (float)nam / tong * 100;
    tiLeNu  = (float)nu  / tong * 100;

    cout << "Ti le nam: " << tiLeNam << "%" << endl;
    cout << "Ti le nu: " << tiLeNu << "%";

    return 0;
}
