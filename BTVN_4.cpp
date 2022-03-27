/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   string ten;
   int i;
   cout <<"Nhap ho va ten: ";
   getline(cin, ten);
   if('a' <= ten[0] && ten[0] <= 'z'){
       ten[0] -= 32;
   }
   for (i=0; i<ten.size(); i++){
       if (ten[i]==' ' && 'a' <= ten[i+1] && ten[i+1]  <= 'z')
       // a < ten < z
           ten[i+1] -= 32;
       
   }
   cout <<ten;
    return 0;
}
