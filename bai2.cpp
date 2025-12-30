#include <iostream>
using namespace std;
int main(){
	// bý?c 1: khai báo bi?n s? nguyên tên là so
	int so;
	// bý?c 2: nh?p vào giá tr? cho s? 
	cout << "moi nhap so \n";
	cin >> so;
	// bý?c 3: ki?m tra tính chan 
	if(so%2 == 0){
		cout << so <<" so chan";
	}
	return 0;
}
