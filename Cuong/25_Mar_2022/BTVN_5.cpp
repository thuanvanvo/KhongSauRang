/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;
int main()
{
string a;
string b;
string c;
bool valid = true;
int khoangtrong=0;
int khoangtrong1;
cout<<"Nhap Ho va Ten: ";
for(int i=0; i<i+1;i++){
	getline(cin, a);
	for(int j=0; j<a.size();j++){
		if(a[a.size()-1]==32||a[0]==32||a[j]==32&&a[j+1]==32){
		    valid=false;
		    cout<<"Chu y khoang cach giua cac tu!"<<endl;
			cout <<"Nhap lai Ho va Ten: ";
			break;
		}
		else valid=true;
	}
	if(valid==true){
	break;
	}}
for(int i=0;i<a.size();i++){
    if(a[i]==32){
        khoangtrong++;
    }
}
if(khoangtrong==0){
    b = a;
}
else if(khoangtrong==1){
    for(int i=0; i<a.size();i++){
    if(a[i]==32){
    b = a.substr(i);
    b.insert(b.begin() + b.size(), a[0]);
     break;
    }
  }
}    
else{
    c=a[0];
    for(int i=0;i<i+1;i++){
        khoangtrong1=0;
        for(int j=0;j<a.size();j++){
            if(a[j]==32){
            khoangtrong1++;
            }
        }
        if(khoangtrong1<=1){
            for(int i=0; i<a.size();i++){
                if(a[i]==32){
                b = a.substr(i+1);
                break;
                }
            }
            break;
        }
        else{
            for(int j=0;j<a.size();j++){
                if(a[j]==32){
                    c.insert(c.begin() + c.size(), a[j+1]);
                    a.erase(a.begin() + j);
                    break;
                }
            }
        }
    }
}
   
cout <<b<<c<<"@company.com";

 return 0;
}
