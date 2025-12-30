#include <iostream>

using namespace std;

int main() {
    int checks;
    float balance; // Thay double bang float
    
    cout << "Nhap so du va so luong sec: ";
    cin >> balance >> checks;

    if (balance < 0 || checks < 0) {
        cout << "Du lieu khong hop le";
        return 0;
    }

    float fee = 10.0f; // Dung float cho cac loai phi

    if (checks < 20) {
        fee += checks * 0.10f;
    } 
    else if (checks <= 39) {
        fee += checks * 0.08f;
    } 
    else if (checks <= 59) {
        fee += checks * 0.06f;
    } 
    else {
        fee += checks * 0.04f;
    }

    if (balance < 400) {
        fee += 15.0f;
    }

    cout << "Phi ngan hang: " << fee;
    
    return 0;
}
