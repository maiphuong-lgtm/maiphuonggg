#include <iostream>
using namespace std;

int main() {
    float vay, baoHiem, xang, dau, lop, baoDuong;
    float tongThang, tongNam;

    cout << "Nhap chi phi vay hang thang: ";
    cin >> vay;
    cout << "Nhap chi phi bao hiem hang thang: ";
    cin >> baoHiem;
    cout << "Nhap chi phi xang hang thang: ";
    cin >> xang;
    cout << "Nhap chi phi dau hang thang: ";
    cin >> dau;
    cout << "Nhap chi phi lop hang thang: ";
    cin >> lop;
    cout << "Nhap chi phi bao duong hang thang: ";
    cin >> baoDuong;

    tongThang = vay + baoHiem + xang + dau + lop + baoDuong;
    tongNam = tongThang * 12;

    cout << "Tong chi phi hang thang: $" << tongThang << endl;
    cout << "Tong chi phi hang nam: $" << tongNam;

    return 0;
}

