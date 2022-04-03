/*Bai tap so 4: Viết hàm tìm ra số có giá trị lớn thứ nhì trong một mảng.*/
#include <iostream>
using namespace std;
void MaxOfSecond(int a[]){
    int max=a[0];
    int maxSecond=0;
	//Finding 1: The array does not always include 5 elements.
    for(int i=1;i<5;i++){
        if(a[i]>max) max=a[i];
        int j=i-1;
        if(a[j]<max&&a[j]>maxSecond) maxSecond=a[j];
    }
    cout<<"So co gia tri lon thu nhi la: "<<maxSecond;
}
int main()
{
    int a[5];
    for(int i=0;i<5;i++){
    cin>>a[i];
    }
    MaxOfSecond(a);
    return 0;
}
   

