#include <iostream>
using namespace std;

int main() {
    int lambda;

    cout << "Nhap buoc song (don vi nm): ";
    cin >> lambda;

    cout << "Loai song la: ";

    if (lambda >= 10000000)
        cout << "Song radio";
    else if (lambda >= 1000000)
        cout << "Song cua lo vi song";
    else if (lambda >= 700)
        cout << "Song hong ngoai";
    else if (lambda >= 400)
        cout << "Song anh sang";
    else if (lambda >= 10)
        cout << "Song tu ngoai";
    else if (lambda >= 1)
        cout << "Tia X";
    else
        cout << "Tia gamma";

    return 0;
}
