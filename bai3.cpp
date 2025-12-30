#include <iostream>
using namespace std;
int main(){
	// b1 khai bao bien
	int so ;
	// b2 nhap gtri cho bien
	cin >> so;
	// b3 ktra gtri cua so la chan hay le bang cong thuc tren
	if (so % 2 == 0){
		cout << "la so chan ";
	}
	else{
		cout << "la so le ";
	}
	return 0;
}
