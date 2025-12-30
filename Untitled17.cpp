#include <iostream>

using namespace std;

int main() {
    int so1 = 247;
    int so2 = 129;
    int tong = so1 + so2;
    int tam; // Bien de tam dung chuong trinh

    cout << "  " << so1 << endl;
    cout << "+ " << so2 << endl;
    cout << "  ---" << endl;
    
    // 2. Yeu cau nhap so bat ky de tiep tuc
    cout << "Nhap mot so bat ky de xem ket qua: ";
    cin >> tam;

    // 3. Hien thi ket qua
    cout << "\nKet qua dung la:" << endl;
    cout << "  " << so1 << endl;
    cout << "+ " << so2 << endl;
    cout << "  ---" << endl;
    cout << "  " << tong << endl;

    return 0;
}
