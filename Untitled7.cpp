#include <iostream>
using namespace std;

int main() {
    int veNguoiLon, veTreEm;
    float tongTien, tienRap, tienPhanPhoi;

    cout << "Nhap so ve nguoi lon: ";
    cin >> veNguoiLon;

    cout << "Nhap so ve tre em: ";
    cin >> veTreEm;

    tongTien = veNguoiLon * 10 + veTreEm * 6;
    tienRap = tongTien * 0.2;
    tienPhanPhoi = tongTien * 0.8;

    cout << "Tong doanh thu: $" << tongTien << endl;
    cout << "Tien rap giu lai: $" << tienRap << endl;
    cout << "Tien nha phan phoi nhan: $" << tienPhanPhoi;

    return 0;
}
