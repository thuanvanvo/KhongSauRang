/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
bool test1(string a){
    if(a.size()>=12){
        return true;
}
    return false;
}
bool test2(string a){    
    for(int j = 0; j < a.size(); j++){
    if(a[j]>='A'&&a[j]<='Z'){
        return true;
}
}
    return false;
}
bool test3(string a){
    for(int j = 0; j < a.size(); j++){
    if(a[j]>='0'&&a[j]<='9'){
        return true;
}
}
    return false;
}
bool test4(string a){
   for(int j = 0; j < a.size(); j++){
    if(a[j]>='!'&&a[j]<='/'||a[j]>=58&&a[j]<=64||a[j]>=91&&a[j]<=96||a[j]>=123&&a[j]<=126){
        return true;
}
}
        return false;
}
bool test5(string a){    
    for(int j = 0; j < a.size(); j++){
    if(a[j]>='a'&&a[j]<='z'){
        return true;
}
}
    return false;
}
int main()
{
    string a,b;
    bool test = false;
    cout << "Nhap mat khau can tham dinh: ";
    for(int i = 0; i < i + 1; i++){
        getline(cin, a);
        
        if(test1(a)==true&&test2(a)==true&&test3(a)==true&&test4(a)==true&&test5(a)==true){
            break;
        } 
        else cout << "Bao mat yeu! Vui long thu mat khau khac:";
        }  
    
   /* do{cout << "Nhap lai mat khau can tham dinh: ";
                getline(cin, b);
        }   while(a!=b);*/
        cout << "Mat khau hop le";
        
        

    return 0;
}
