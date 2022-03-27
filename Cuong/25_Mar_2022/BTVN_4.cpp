/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string a;
    cout << "Nhap ho va ten: ";
    getline(cin, a);
    for(int i = 0; i < a.size(); i++){
        if(a[i]>='A'&& a[i] <= 'Z'){
            a[i]+=32;
    }
    }
    a[0]-=32;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == 32 && a[i+1]>='a'&& a[i+1] <= 'z'){
            a[i+1]-=32;
           } 
        }
        
    
    cout << "Ho va ten sau khi thay doi: " << a;
    return 0;
}
