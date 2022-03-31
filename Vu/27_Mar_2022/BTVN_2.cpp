/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;
void SOfSquare(int a, int* S){
    if (a > 0){
         *S = a*a;
    }
    else *S = 0;
    
} 

    
int main() {
    int b;
    int S;
    cout <<"Nhap do dai canh hinh vuong: ";
    cin >> b;
    SOfSquare(b, &S);
    cout<<"Dien tich hinh vuong la: " <<S;
    return 0;
}
