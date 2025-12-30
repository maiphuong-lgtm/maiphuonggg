#include <iostream>
using namespace std;
int main(){
// b1 khai bao bien
float dtb;
// b2 nhap gtri cho dtb
cin >> dtb;
//b3 ktra diem xep loai 
if (dtb >=9 && dtb <=10 )
{
	cout << "ban xep loai xuat sac";
}
else if(dtb >=8 && dtb <9){
		cout << "ban xep loai gioi";
}
else if(dtb >=7 && dtb <8){
		cout << "ban xep loai kha";
}
else if(dtb >=5 && dtb <7){
		cout << "ban xep loai trung binh";
}
else if(dtb >=0 && dtb <5){
		cout << "ban xep loai gioi";
}
	return 0;
}
