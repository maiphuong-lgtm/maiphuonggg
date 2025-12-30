#include <iostream>
using namespace std;

int main() {
    float giaTriThuc;
    float giaTriDanhGia;
    float thue;

    cout << "Nhap gia tri thuc cua tai san: ";
    cin >> giaTriThuc;

    // Gia tri danh gia = 60% gia tri thuc
    giaTriDanhGia = giaTriThuc * 0.6;

    // Thue: 75 cent cho moi 100$
    thue = (giaTriDanhGia / 100) * 0.75;

    cout << "Gia tri danh gia: $ " << giaTriDanhGia << endl;
    cout << "Thue bat dong san: $ " << thue << endl;

    return 0;
}
