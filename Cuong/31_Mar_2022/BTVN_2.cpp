//Bai tap so 2:Viết và thực thi hàm tính tổng tất cả các phần tử trong một mảng
#include <iostream>

using namespace std;
int Sum(int n[]){
    int sum=0;
    for(int i=0;i<10;i++){
        sum+=n[i];  
    }
    return sum;
    
}
int main()
{
    int n[10]={5,2,3,6,8,3,2,6,8,9};
    cout<<Sum(n);
    return 0;
}
