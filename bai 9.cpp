#include <iostream>
using namespace std;
int main() {
    int cent, nickel, dime, quarter;
    int tongTien;
    cout << "Nhap so cent (1 cent): ";
    cin >> cent;
    cout << "Nhap so nickel (5 cent): ";
    cin >> nickel;
    cout << "Nhap so dime (10 cent): ";
    cin >> dime;
    cout << "Nhap so quarter (35 cent): ";
    cin >> quarter;
    tongTien = cent * 1 + nickel * 5 + dime * 10 + quarter * 35;
    cout << "Tong so tien la: " << tongTien << " cent" << endl;
    if (tongTien == 100) {
        cout << "Chuc mung! Ban da thang tro choi." << endl;
    } else if (tongTien > 100) {
        cout << "Tong tien lon hon 1 do la." << endl;
    } else {
        cout << "Tong tien nho hon 1 do la." << endl;
    }
    return 0;
}
