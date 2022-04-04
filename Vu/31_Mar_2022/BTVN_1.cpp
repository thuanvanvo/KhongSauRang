/******************************************************************************

1. Viết và thực thi hàm tính giá trị của P= 1*2*3*…*n

*******************************************************************************/

#include <iostream>

using namespace std;
int GiaiThua(int n){
    int P = 1;
    if (n < 0) 
       return -1;
    else {
        for (int i = 1; i <= n; i++)
        P *= i;
        return P;
    }
    
}

int main()
{
    int n;
    cin >>n;
    if (GiaiThua(n) ==-1) {
        cout <<"Giai thua cua so am khong ton tai!";
    }
    else cout<<"Giai thua cua "<<n<<" bang "<<GiaiThua(n);
    

    return 0;
}
