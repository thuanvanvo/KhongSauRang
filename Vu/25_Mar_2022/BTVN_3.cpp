/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
    int i;
    bool test1(string s){
        if (s.size() >= 12){
            return true;
        }
        return false;}
    
    bool test2(string s){
    for (i = 0; i < s.size(); i++){
        if ('A' <= s[i] && s[i] <= 'Z'  ){
            return true;
        }
    }    return false;
    }
    
    bool test3(string s){
    for (i = 0; i < s.size(); i++){
        if ('a' <= s[i] && s[i] <= 'z'  ){
            return true;
        }
    }    return false;
    }
    
    bool test4(string s){
    for (i = 0; i < s.size(); i++){
        if ('!'<=s[i]&&s[i]<='?'||':'<=s[i]&&s[i]<='@'){
            return true;
        }
        }
        return false;
    }
    
    bool test5(string s){
    for (i = 0; i < s.size(); i++){
        if ('0' <= s[i] && s[i] <= '9'  ){
            return true;
        }
    }    return false;
    }
    
int main()
{
    string s;
    cout <<"Vui long nhap mat khau ";
    for(int i = 0; i < i + 1; i++){
        getline(cin, s);
    
        if (test1(s)==true&&test2(s)==true&&test3(s)==true&&test4(s)==true&&test5(s)==true)
        {cout <<"dang ki mat khau thanh cong";
            break;
        }
        else cout <<"Bao mat yeu! Vui long thu mat khau khac";
    }
    return 0;
}
