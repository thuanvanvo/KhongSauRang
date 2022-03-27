/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   string p, p1;
   int i;
    bool valid = true;
    cout << "Dang ki mat khau ";
    getline(cin, p);
    cout << "Nhap mat khau vua dang ki ";
    for (i = 0; i < i + 1; i++){
    
        getline(cin, p1);
        if (p != p1){
            cout <<"Mat khau khong hop le vui long nhap lai mat khau!" ;
        }
        else {
            cout << "Mat khau hop le";
            break;
        }
    }

    return 0;
}
