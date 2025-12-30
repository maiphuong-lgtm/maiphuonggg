#include <iostream>
using namespace std;

int main() {
    int thang, nam;
    float tongThu;
    float doanhThu, thueBang, thueQuan, tongThue;

    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;
    cout << "Nhap tong so tien thu duoc: ";
    cin >> tongThu;

    // Tinh doanh thu ban san pham (chua thue)
    doanhThu = tongThu / 1.06;

    // Tinh thue
    thueBang = doanhThu * 0.04;
    thueQuan = doanhThu * 0.02;
    tongThue = thueBang + thueQuan;

    // Cat 2 chu so thap phan
    tongThu   = (int)(tongThu * 100) / 100.0;
    doanhThu  = (int)(doanhThu * 100) / 100.0;
    thueBang  = (int)(thueBang * 100) / 100.0;
    thueQuan  = (int)(thueQuan * 100) / 100.0;
    tongThue  = (int)(tongThue * 100) / 100.0;

    cout << "Month: " << thang << "/" << nam << endl;
    cout << "----------------------" << endl;
    cout << "Total Collected: $ " << tongThu << endl;
    cout << "Sales: $ " << doanhThu << endl;
    cout << "County Sales Tax: $ " << thueQuan << endl;
    cout << "State Sales Tax: $ " << thueBang << endl;
    cout << "Total Sales Tax: $ " << tongThue << endl;

    return 0;
}

