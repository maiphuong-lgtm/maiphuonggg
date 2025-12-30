#include <iostream>
using namespace std;

int main() {
    float palletRong, palletCoHang;
    
    cout << "Nhap pallet rong: ";
    cin >> palletRong;
    
    cout << "Nhap pallet co hang: ";
    cin >> palletCoHang;
    
    cout << "So vat dung tren pallet la: "
         << (palletCoHang - palletRong) / 12.5;
         
    return 0;
}
