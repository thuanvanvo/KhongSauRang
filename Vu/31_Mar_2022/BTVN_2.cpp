/******************************************************************************
2. Viết và thực thi hàm tính tổng tất cả các phần tử trong một mảng.
 Một cửa hàng sách cần quản lý các đầu sách với các thuộc tính:
- Tiêu đề
- Thể loại
- Tác giả
- Giá tiền
- Số lượng trong kho
Viết khai báo class cho đối tượng Sach cùng với các phương thức: 
void Nhap(): nhập thông tin đầu sách
unsigned long int ThanhTien(unsigned long int giaTien, int soLuongMua): trả về 
số tiền phải thanh toán.
bool ConHang(): trả về trạng thái còng hàng trong kho không?
*******************************************************************************/

#include <iostream>

using namespace std;
class QuanLyCuaHang{
    private:
        string tieuDe;
        string theLoai;
        string tacGia;
        unsigned long int thanhTien(unsigned long int giaTien, int soLuongMua);
        int soLuongConTrongKho;
    public:
        void Nhap(){
            cout<<"Nhap thong tin dau sach: ";
            getline (cin, tieuDe);
            cout<<"Nhap so luong ban can mua: ";
            cin >>soLuongMua;
            cin.ignore();
        }
        bool ConHang(){
            if (soLuongConTrongKho > 0)
            return true;
            else return false;
        }
};
int main()
{
    QuanLyCuaHang a;
    a.Nhap();
    a.ConHang();
    if (a.ConHang() == true)
        cout <<"Con hang trong kho";
    else cout<<"Het hang";

    return 0;
}
