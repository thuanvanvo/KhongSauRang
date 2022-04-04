//Bai 1 xã dinh vi tri của thanh vien trong nhom
//Finding 1: The template should be followed
#include <iostream>

using namespace std;

int TieuDoi(int a[], int n){
    int sum = 0; 
    int sumOfMember = 0;
    for (int i=0; i<10; i++){
        sum += a[i];
    }
        if (n <= 0 || n > sum)
            return -1;
        else {
            for (int i=0; i<10; i++){
                sumOfMember+=a[i];
                if (sumOfMember >=n)
                    return i+1;
            }
        }
}

//The code executes OK, but should be implemented functionally.
//3-Apr-2022: Fixed.

int main(){
    int a[10]={2,3,1,6,5,9,8,2,11,3};
    int n;
   
    cout << "Nhap so thu tu thanh vien trong dai doi: ";
    cin >>n;
    if (TieuDoi(a, n) == -1) 
        cout<<"Thanh vien khong thuoc tieu doi nao ";
    else 
        cout <<"Thanh vien thuoc Tieu doi "<<TieuDoi(a, n);  
        
    return 0;
}

