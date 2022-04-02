//Bai tap so 1(31-Mar-2022):Viết và thực thi hàm tính giá trị của P= 1*2*3*…*n
#include <iostream>

using namespace std;
int TinhGiaTriCuaP(int n){
    if(n==1) return 1;
    return n*TinhGiaTriCuaP(n-1);
}
int main()
{
    int n=6;
    cout<<TinhGiaTriCuaP(n);
    return 0;
}
