#include <iostream>
using namespace std;

int main() {
    float C, F;

    cout << "Nhap nhiet do Celsius: ";
    cin >> C;

    F = 9.0/5 * C + 32;

    cout << "Nhiet do Fahrenheit la: " << F;

    return 0;
}
