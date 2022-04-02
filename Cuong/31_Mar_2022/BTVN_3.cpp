/*Bai tap so 3:Một cửa hàng sách cần quản lý các đầu sách với các thuộc tính:
- Tiêu đề
- Thể loại
- Tác giả
- Giá tiền
- Số lượng trong kho
Viết khai báo class cho đối tượng Sach cùng với các phương thức: 
    void Nhap(): nhập thông tin đầu sách
    unsigned long int ThanhTien(unsigned long int giaTien, int soLuongMua): trả về
số tiền phải thanh toán.
    bool ConHang(): trả về trạng thái còng hàng trong kho không?*/
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
class QuanLyCacDauSach{
    private:
    string tieuDe;
    string theLoai;
    string tacGia;
    unsigned long int giaTien;
    int soLuongTrongKho;
    int soLuongMua;
    public:
    void Nhap(){
        cout<<"Nhap tieu de sach: ";
        getline(cin,tieuDe);
        cout<<"Nhap the loai sach: ";
        getline(cin,theLoai);
        cout<<"Nhap tac gia sach: ";
        getline(cin,tacGia);
        cout<<"Nhap gia sach: ";
        cin>>giaTien;
        cout<<"Nhap so luong con trong kho: ";
        cin>>soLuongTrongKho;
    }
    unsigned long int ThanhTien(){
        return giaTien*soLuongMua;
    }
    bool ConHang(){
        if(soLuongMua<=soLuongTrongKho) return true;
        return false;
    }
};
int main()
{
    QuanLyCacDauSach a,b;
    a.Nhap();
    cout<<"So tien phai thanh toan: "<<a.ThanhTien()<<endl;
    if(a.ConHang())   cout<<"Tinh trang: Con Hang";
    else cout<<"Tinh trang: Het Hang";
    return 0;
}
   

