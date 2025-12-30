
// input : nhap tuoi
// process : kiem tra tuoi >=18
        // bao la du 18 tuoi
// output : in ra du 18 tuoi chua

// lam theo 3 buoc
// buoc 1 : khai bao bien tuoi theo int
// buoc 2 : nhap gia tri cho bien 
// buoc 3 : kiem tra bien tuoi va in thong bao
// in ra gia tri

#include <iostream>
using namespace std;

int main() {
	// b1 
	int tuoi;
	//b2
	cout << "xin moi nhap tuoi ";
	cin >> tuoi;
	// b3
	if(tuoi>=18)
	{
		cout << "tuoi du 18";
	}
	return 0;
}
