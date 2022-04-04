/******************************************************************************
 Viết hàm tìm ra số có giá trị lớn thứ nhì trong một mảng.*/

#include <iostream>
#include <stdio.h>
using namespace std;
    int Sec_Biggest(int s[], int n){
        int biggest = s[0];
        int ndBiggest = s[0];
        for ( int i = 0; i < n; i++){
            if (s[i] > biggest){
                biggest = s[i];
            }
        }
        for (int j = 0; j < n; j++){   
            if (s[j] < biggest && s[j] > ndBiggest )
            ndBiggest = s[j];
            
        }
        return ndBiggest;
    }
int main() {
    int s[5]={1,3,6,2,7};
    int n = sizeof(s)/sizeof(int);
    cout<<"So lon thu hai la: "<<Sec_Biggest(s, n);

    return 0;
}
