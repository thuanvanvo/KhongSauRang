/***************************************************************
*Bai 1: Một đại đội gồm 10 tiểu đội xếp thành một hàng dài. Từng thành viên trong hàng lần lượt đếm số điểm danh.
Với dữ kiện cho trước là một mảng gồm 10 phần tử, chứa thông tin số lượng thành viên của mỗi tiểu đội và một số 
nguyên n bất kì. Viết chương trình trả về kết quả thành viên thứ n đó thuộc tiểu đội nào?*
***************************************************************/
//Finding 1: The length of each line should be less than 80.
#include <iostream>
using namespace std;

int main()
{
   int a[10]={2,3,1,6,5,9,8,2,11,3};
    int n;
	//Finding 2: The parameter is named incorrectly
	//Ex: int sum_a, int tieuDoi, int sum_DangDem
    int Sum_a=0;
    cout <<"Nhap so thu tu nguoi can tim: ";
    cin>>n;
    int TieuDoi=1;
    int Sum_DangDem=a[0];
    for(int i = 0; i<10; i++){
        Sum_a+=a[i];}
	//Finding 3: How about n exceeds Sum_a?
	//Finding 4: The alignment in line 12, 22, 25, 35..37 
	//needs to be fixed.
if(Sum_a<n){
    cout<<"Thanh vien do khong thuoc Tieu doi nao! ";
        }
        else{
    for(int i = 0; i<9; i++){
    if(Sum_DangDem<n){
        Sum_DangDem+=a[i+1];
        TieuDoi++;
    }
    else break;
    }
        }
   cout <<"tieu doi so: "<<TieuDoi;
    return 0;
}
