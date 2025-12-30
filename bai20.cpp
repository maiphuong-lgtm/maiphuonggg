#include <iostream>

using namespace std;

int main() {
    // Dung float cho nhe
    float mon1 = 15.59;
    float mon2 = 24.59;
    float mon3 = 6.59;
    float mon4 = 12.59;
    float mon5 = 3.59;

    float tong_tam_tinh = mon1 + mon2 + mon3 + mon4 + mon5;
    float thue = tong_tam_tinh * 0.07;
    float tong_phai_tra = tong_tam_tinh + thue;

    cout << "Tong tam tinh: " << tong_tam_tinh << endl;
    cout << "Thue: " << thue << endl;
    cout << "Tong phai tra: " << tong_phai_tra << endl;

    return 0;
}
