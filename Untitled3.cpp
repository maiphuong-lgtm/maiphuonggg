#include <iostream>
using namespace std;

int main() {
    float d1, d2, d3, d4, d5;
    float trungBinh;

    cout << "Nhap diem bai kiem tra 1: ";
    cin >> d1;
    cout << "Nhap diem bai kiem tra 2: ";
    cin >> d2;
    cout << "Nhap diem bai kiem tra 3: ";
    cin >> d3;
    cout << "Nhap diem bai kiem tra 4: ";
    cin >> d4;
    cout << "Nhap diem bai kiem tra 5: ";
    cin >> d5;

    trungBinh = (d1 + d2 + d3 + d4 + d5) / 5;

    cout << "Diem trung binh: " << (int)(trungBinh * 10) / 10.0;

    return 0;
}

