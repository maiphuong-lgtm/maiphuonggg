#include <iostream>
using namespace std;

int main() {
    float chieuCao, canNang, BMI;
    cout << "Nhap chieu cao (met): ";
    cin >> chieuCao;
    cout << "Nhap can nang (kg): ";
    cin >> canNang;
    BMI = canNang / (chieuCao * chieuCao);
    cout << "Chi so BMI cua ban la: " << BMI << endl;
    if (BMI > 25) {
        cout << "Ban dang thua can." << endl;
    } else if (BMI < 18.5) {
        cout << "Ban dang gay." << endl;
    } else {
        cout << "Ban co can nang binh thuong." << endl;
    }
    return 0;
}
