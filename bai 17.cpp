#include <iostream>
using namespace std;

int main() {
    int h1, h2, h3;

    cin >> h1;
    cin >> h2;
    cin >> h3;

    // Chieu cao hop le: 200cm - 500cm
    if (h1 < 200 || h1 > 500 ||
        h2 < 200 || h2 > 500 ||
        h3 < 200 || h3 > 500) {
        cout << "Du lieu khong hop le";
        return 0;
    }

    if (h1 >= h2 && h1 >= h3)
        cout << "Nguoi 1 cao nhat";
    else if (h2 >= h1 && h2 >= h3)
        cout << "Nguoi 2 cao nhat";
    else
        cout << "Nguoi 3 cao nhat";

    return 0;
}

