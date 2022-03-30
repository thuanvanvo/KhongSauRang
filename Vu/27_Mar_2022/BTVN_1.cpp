//Finding 1: The template should be followed
#include <iostream>

using namespace std;

//The code executes OK, but should be implemented functionally.
int main()
{
    int a[10]={2,3,1,6,5,9,8,2,11,3};
    int n, count=0;
    int i,j;
    int sumOfAllMember=0, sumOfMember=0;
   
    for (i=0; i<10; i++){
        sumOfAllMember+=a[i];
    }
    
    cout << "Nhap so thu tu thanh vien trong dai doi: ";
    for (i=0; i<i+1; i++){
        cin >>n;
        if (n <= 0 || n > sumOfAllMember){
            cout <<"So thu tu thanh vien khong hop le, nhap lai: ";
        }
        else {
            for (int j=0; j<10; j++){
                sumOfMember+=a[j];
                if (sumOfMember >=n){
                    count = j+1;
                    break;
                }
            }
        cout <<"Thanh vien thu "<<n<<" thuoc Tieu doi "<<count;  
        }
      
    }
           
    return 0;
}
