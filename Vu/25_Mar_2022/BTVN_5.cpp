#include <iostream>

using namespace std;

int main()
{
    string hoten, ten, xyz;
   int i,j;
   cout <<"Nhap ho va ten: ";
   getline(cin, hoten);
   for (i=hoten.size(); i>0; i--){
       if ('A' <= hoten[i] && hoten[i] <= 'Z'){
           for (j = i; j <= hoen.size(); j++ ){
           ten = ten+hoten[j];
           
           
           }
       }
   }
   for (i=0; i<hoten.size() - ten.size(); i++){
      if ('A' <= hoten[i] && hoten[i] <= 'Z')
      xyz = xyz + hoten[i];
   }
   cout<<ten <<xyz <<"@company.com";
    return 0;
}