#include <iostream>
using namespace std;

int main() {
    int choice;
    int distance;

    cout << "Chon moi truong truyen am:" << endl;
    cout << "1. Khong khi" << endl;
    cout << "2. Nuoc" << endl;
    cout << "3. Thep" << endl;
    cout << "Nhap lua chon: ";
    cin >> choice;

    cout << "Nhap khoang cach truyen am: ";
    cin >> distance;

    if (distance < 0) {
        cout << "Khoang cach khong hop le";
        return 0;
    }

    int speed;

    if (choice == 1)
        speed = 1100;
    else if (choice == 2)
        speed = 4900;
    else if (choice == 3)
        speed = 16400;
    else {
        cout << "Lua chon khong hop le";
        return 0;
    }

    int time = distance / speed;   // lay phan nguyen
    cout << "Thoi gian truyen am la: " << time << " giay";

    return 0;
}
