#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int soNguoi;
    double duongKinh;
    const double PI = 3.14159;
    const double dienTichMoiMieng = 14.125; 
    cout << "Nhap so nguoi tham du bua tiec: ";
    cin >> soNguoi;
    cout << "Nhap duong kinh pizza (inch): ";
    cin >> duongKinh;
    double banKinh = duongKinh / 2;
    double dienTichPizza = PI * banKinh * banKinh;
    int soMiengMoiPizza = dienTichPizza / dienTichMoiMieng;
    int tongSoMiengCan = soNguoi * 4;
    int soPizzaCanMua = ceil((double)tongSoMiengCan / soMiengMoiPizza);
    cout << "So luong pizza can mua: " << soPizzaCanMua << endl;
    return 0;
}
