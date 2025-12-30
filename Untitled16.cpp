#include <iostream>
using namespace std;

int main() {
    float value, rate;
    cin >> value >> rate;

    float tax = ((value * 0.6f - 5000) / 100) * rate;
    if (tax < 0) tax = 0;

    cout << tax << endl << tax / 4;
    return 0;
}
