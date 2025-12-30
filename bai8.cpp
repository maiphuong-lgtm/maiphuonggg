#include <iostream>
using namespace std;
int main(){
double mon1,mon2,mon3,mon4,mon5,thue,chuathue,tong;
mon1=15.59;
mon2=24.59;
mon3=6.59;
mon4=12.59;
mon5=3.59;
chuathue=mon1+mon2+mon3+mon4+mon5;
thue=(chuathue*7)/100;
tong=chuathue+thue;
cout<<"gia tri mon do thu nhat la: "<<mon1<<endl;
cout<<"gia tri mon do thu hai la: "<<mon2<<endl;
cout<<"gia tri mon do thu ba la: "<<mon3<<endl;
cout<<"gia tri mon do thu tu la: "<<mon4<<endl;
cout<<"gia tri mon do thu nam la: "<<mon5<<endl;

cout<<"tong so tien chua thue la: "<<chuathue<<endl;
cout<<"tien thue la: "<<thue<<endl;
cout<<"tien phai tra la: "<<tong<<endl;

}
