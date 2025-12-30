#include <iostream>
using namespace std;
int main() {
    int thang, nam;
    bool namNhuan = false;
    cout << "Nhap vao 1 thang (1-12): ";
    cin >> thang;
    cout << "Nhap vao 1 nam: ";
    cin >> nam;
    if (nam % 100 == 0) {
        if (nam % 400 == 0)
            namNhuan = true;
    } else {
        if (nam % 4 == 0)
            namNhuan = true;
    }
    if (thang < 1 || thang > 12) {
        cout << "Thang khong hop le." << endl;
    } else {
        switch (thang) {
            case 1: case 3: case 5: case 7:
            case 8: case 10: case 12:
                cout << "So ngay: 31";
                break;
            case 4: case 6: case 9: case 11:
                cout << "So ngay: 30";
                break;
            case 2:
                if (namNhuan)
                    cout << "So ngay: 29";
                else
                    cout << "So ngay: 28";
                break;
        }
    }
    return 0;
}
