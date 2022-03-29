/***************************************************************
*Bai 2: hập một chuỗi kí tự từ bàn phím.
Viết chương trình xuất ra kí tự xuất hiện nhiều nhất trong chuỗi? Nếu có nhiều kí tự xuất hiện nhiều như nhau, xuất kết quả 
“Khong co ki tu nao xuat hien nhieu nhat”
***************************************************************/

#include <iostream>
using namespace std;
int CountMaxSwap(string a){
    int Count=0;
    int CountMax=0;
    for(int i=0;i<a.size();i++){
       if(a[i]>='a'&&a[i]<='z'){
            for(int j=0;j<a.size();j++){
                if(a[i]==a[j]){
                    Count++;
                }
            }
            if(Count>CountMax){
                   CountMax=Count;
                   Count=0;
            }
            else Count=0;
       }
   }
   return CountMax;
}
int main()
{
    string a;
    getline(cin,a);
    int CountSwap=0;
    int CheckCountSwap=0;
    string CharMax;
   for(int i=0;i<a.size();i++){
       if(a[i]>='a'&&a[i]<='z'){
            for(int j=0;j<a.size();j++){
                if(a[i]==a[j]){
                    CountSwap++;
                }
            }
   if(CountSwap==CountMaxSwap(a)){
        CheckCountSwap++;
        CharMax=a[i];
    }
            CountSwap=0;
       }
   }
   if(CheckCountSwap==CountMaxSwap(a)){
       cout<<"Ky tu "<<CharMax<<" xuat hien nhieu nhat, voi "<<CountMaxSwap(a)<<" lan!";
   }
   else cout<<"Khong co ki tu nao xuat hien nhieu nhat";
    return 0;
}
