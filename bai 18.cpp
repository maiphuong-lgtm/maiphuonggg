#include <iostream>
using namespace std;

int main() {
    int calories, fat;

    cout << "Nhap tong so calo va so gram chat beo: ";
    cin >> calories >> fat;

    if (calories <= 0 || fat < 0 || fat * 9 > calories) {
        cout << "Du lieu khong hop le";
        return 0;
    }

    int fatCalories = fat * 9;
    int percent = fatCalories * 100 / calories;

    cout << "Ti le calo tu chat beo la: " << percent << "%" << endl;

    if (percent < 30)
        cout << "Day la thuc pham it chat beo";

    return 0;
}
