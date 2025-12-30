#include <iostream>
using namespace std;

int main() {
    int soBanh;
    double duong, bo, bot;

    // Nhap so luong banh muon lam 
    cout << "Nhap so luong banh muon lam: ";
    cin >> soBanh;

    // Tính luong nguyen lieu can lam 
    duong = soBanh * 1.5 / 48;
    bo    = soBanh * 1.0 / 48;
    bot   = soBanh * 2.75 / 48;

    // Hien thi ket qua 
    cout << "Luong duong can: " << duong << " coc" << endl;
    cout << "Luong bo can   : " << bo    << " coc" << endl;
    cout << "Luong bot can  : " << bot   << " coc" << endl;

    return 0;
}
