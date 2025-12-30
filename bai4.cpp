
#include <iostream>
using namespace std;
int main(){
	// b1 khai bao bien
	char dnu;
	int k;
	// b2 nhap gtri cho dnu
	cout <<"ban co phai sinh vien DNU khong neu co nhap y neu khong nhap n";
	cin >> dnu;
	// b3 ktra gtri dnu 
if (dnu == 'y')
	{
		cout << "ban la sinh vien DNU \n" ;
		cout << "Moi nhap khoa";
		cin >> k;
		if (k == 19){
			cout <<"ban dang hoc lap trinh co ban";
		}else
		{
			cout << "ban da hoc lap trinh co ban";
		}
		
	}else
	{
		cout << "ban khong phai sinh vien DNU ";
	}
	return 0;
}
