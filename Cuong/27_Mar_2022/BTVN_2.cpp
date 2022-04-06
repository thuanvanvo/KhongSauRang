/***************************************************************
*Bai 2: hập một chuỗi kí tự từ bàn phím.
Viết chương trình xuất ra kí tự xuất hiện nhiều nhất trong chuỗi? Nếu có nhiều 
kí tự xuất hiện nhiều như nhau, xuất kết quả 
“Khong co ki tu nao xuat hien nhieu nhat”
***************************************************************/
//Finding 1: The length of each line should be less than 80.
//31-Mar-2022: Fixed
#include <iostream>
using namespace std;
void RepeatTheMost(string a){
	//Finding 2: The parameter is named incorrectly
	//Ex: int count, int countMax,...
	//fixed
    int count[26];
    for(int i=0;i<26;i++){
        count[i]=0;    
}
    for(int i=0; i<a.size();i++){
        count[int(a[i])-97]++;
    }
    int countMax=count[0];
    int maxPosition=0;
    for(int i=0;i<26;i++){
        if(countMax<count[i]){
            countMax=count[i];
            maxPosition=i;
        }
    }    
    cout<<"ky tu xuat hien nhieu nhat la "<< char(maxPosition+97) 
	<<", voi so lan lap lai la "<<countMax;
}
int main()
{
    string a = "adkjsadkjncnufnnncnncnnnnnnndjoadn";
    RepeatTheMost(a);
	//The coding executes OK, but not effectively
	//because too many loops were called.
	//fixed
    return 0;
}
