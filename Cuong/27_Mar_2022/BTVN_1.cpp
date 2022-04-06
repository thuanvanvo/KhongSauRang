/***************************************************************
*Bai 1: Một đại đội gồm 10 tiểu đội xếp thành một hàng dài. Từng thành viên 
trong hàng lần lượt đếm số điểm danh.Với dữ kiện cho trước là một mảng gồm 10 
phần tử, chứa thông tin số lượng thành viên của mỗi tiểu đội và một số nguyên n 
bất kì. Viết chương trình trả về kết quả thành viên thứ n đó thuộc tiểu đội nào?
***************************************************************/
//Finding 1: The length of each line should be less than 80.
//fixed
#include <iostream>
using namespace std;
int TieuDoi(int a[],int n){
    int sumOfAll=0;
    int sum=0;
    for(int i=0;i<10;i++){
        sumOfAll+=a[i];
    }
    if(sumOfAll<n||n<=0)return -1;
    for(int i=0;i<10;i++){
        sum+=a[i];
        if(n<=sum) return i+1;
    }
}
int main()
{
   int a[10]={2,3,1,6,5,9,8,2,11,3};
    int n;
	//Finding 2: The parameter is named incorrectly
	//Ex: int sum_a, int tieuDoi, int sum_DangDem
	//fixed
    cout <<"Nhap so thu tu nguoi can tim: ";
    cin>>n;
    if(TieuDoi(a,n)==-1) cout<<"Khong thuoc tieu doi nao!";
    else cout<<"thanh vien thuoc tieu doi so: " << TieuDoi(a,n);
	//Finding 3: How about n exceeds Sum_a?
	//Finding 4: The alignment in line 12, 22, 25, 35..37 
	//needs to be fixed.
	//fixed
    return 0;
}
