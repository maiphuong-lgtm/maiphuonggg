#include <iostream>

using namespace std;

int main() {
    int quantity;
    cout << "Nhap so luong: ";
    cin >> quantity;

    // Kiem tra dieu kien hop le
    if (quantity < 10) {
        cout << "So luong khong hop le" << endl;
        return 0;
    }

    int price = 99;
    int total;

    // Cau truc if - else if - else hop le
    if (quantity <= 19) {
        total = quantity * price * 80 / 100;
    } 
    else if (quantity <= 49) {
        total = quantity * price * 70 / 100;
    } 
    else if (quantity <= 99) {
        total = quantity * price * 60 / 100;
    } 
    else {
        total = quantity * price * 50 / 100;
    }

    cout << "Tong tien: " << total << endl;

    return 0;
}

