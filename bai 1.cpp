#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout << " Nhap so thu nhat: ";
	cin>>a;
	cout << " Nhap so thun hai: ";
	cin>>b;
	int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;
    cout << "So lon hon la: " << max << endl;
    cout << "So nho hon la: " << min << endl;
	return 0;
}
