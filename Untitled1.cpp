#include <iostream>
using namespace std;

int main() {
    float gallon, dam;

    cout << "Nhap so gallon xang: ";
    cin >> gallon;

    cout << "Nhap so dam co the di duoc: ";
    cin >> dam;

    cout << "So dam tren moi gallon xang la: "
         << dam / gallon;

    return 0;
}
