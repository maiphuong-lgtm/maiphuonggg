#include <iostream>
using namespace std;

int main() {
    float dollar, yen, euro;
    float YEN_PER_DOLLAR = 98.93;
    float EUROS_PER_DOLLAR = 0.74;

    cout << "Nhap so tien (USD): ";
    cin >> dollar;

    yen = dollar * YEN_PER_DOLLAR;
    euro = dollar * EUROS_PER_DOLLAR;

    yen = (int)(yen * 100) / 100.0;
    euro = (int)(euro * 100) / 100.0;

    cout << "So tien tuong ung bang Yen: " << yen << endl;
    cout << "So tien tuong ung bang Euro: " << euro << endl;

    return 0;
}

