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
    cout << "Dang ki mat khau ";
    getline(cin, p);
    cout << "Nhap mat khau vua dang ki ";
    getline(cin, p1);
    int i, j;
    bool valid = true;
    bool match = false;
    if (p.size() != p1.size() ){
        valid = false;
    }
    if (valid == false) {
        cout << "Mat khau khong dung, vui long nhap lai ";
        getline(cin, p1);
    }
    else {
	
}
    if (match == true) cout <<"Mat khau hop le";
    else{
        cout <<"Mat khau khong dung, vui long nhap lai: ";
        getline(cin, p1);
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}