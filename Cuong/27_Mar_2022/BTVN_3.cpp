#include <iostream>

using namespace std;
void DienTichHinhVuong(int side, int* area){ // Cap dia chi bien x, bien y
//fixed
	if(side<=0) *area=-1;
	else *area=side*side;
}
int main()
{
    int side=9;
    int area=0;
    DienTichHinhVuong(side,&area);
    if(area==-1) cout<<"Bien khong hop le";
    else cout<<"Area = "<<area;
    return 0;
}
