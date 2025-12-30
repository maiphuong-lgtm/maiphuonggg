#include <iostream>
using namespace std;

int main() {
    int a = 123;
    int b = 456;
    int answer;

    cout << a << endl;
    cout << "+ " << b << endl;
    cout << "-----" << endl;
    cin >> answer;

    if (answer == a + b)
        cout << "Chuc mung! Dung roi.";
    else
        cout << "Sai. Dap an dung la: " << a + b;

    return 0;
}
