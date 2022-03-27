/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string hoten, ten;
   int i,j;
   cout <<"Nhap ho va ten: ";
   getline(cin, hoten);
   for (i=hoten.size(); i>0; i--){
       if ('A' <= hoten[i] && hoten[i] <= 'Z'){
           for (j = i; j <= hoten.size(); j++ ){
           ten = ten+hoten[j];
           
           }
       }
   }
    //le Trinh 
 
    return 0;
}
