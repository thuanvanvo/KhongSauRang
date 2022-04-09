/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;
class PhongTro{
  private:
  int soPhong;
  unsigned int giaPhong;
  unsigned int soNuocCu;
  unsigned int soDienCu;
  unsigned int soNuocMoi;
  unsigned int soDienMoi;
  time_t now = time(0);
  tm *ltm = localtime(&now);
  public:
    void DangKyPhong(){
        cout<<"Nhap so phong: ";
        cin>>soPhong;
        cout<<"Nhap gia phong: ";
        cin>>giaPhong;
        cout<<"Nhap so nuoc moi: ";
        cin>>soNuocMoi;
        cout<<"Nhap so dien moi: ";
        cin>>soDienMoi;
		soDienCu=soDienMoi;
		soNuocCu=soNuocMoi;
    }  
    void CapNhatSoDienVaNuocMoi(){
        soNuocCu=soNuocMoi;
        cout<<"Nhap so nuoc moi: ";
        cin>>soNuocMoi;
        soDienCu=soDienMoi;
        cout<<"Nhap so dien moi: ";
        cin>>soDienMoi;
    }
    unsigned long int TinhTienDien(){
        return (soDienMoi - soDienCu)*3500;
    }
    unsigned long int TinhTienNuoc(){
        return (soNuocMoi - soNuocCu)*15000;
    }
    unsigned long int TinhTienNha(){
        return giaPhong + TinhTienNuoc() + TinhTienDien();
    }
    void HoaDon(){
        cout<<"Hoa don tien nha thang: "<< 1 + ltm->tm_mon<< endl;
        cout<<"So phong: "<<soPhong<<"\n";
        cout<<"Tien thue nha: "<<giaPhong<<" VND\n";
        cout<<"Tien dien: "<<TinhTienDien()<<" VND\n";
        cout<<"Tien nuoc: "<<TinhTienNuoc()<<" VND\n";
        cout<<"Tong hoa don: "<<giaPhong+TinhTienNuoc()+TinhTienDien()<<" VND\n";
    }
};
    class SoQuanLy{
    private:
    int soPhong;
    vector <PhongTro> room;
    public:
    void KhoiTaoSo(){
        int n;
        cout << "Nhap tong so phong: ";
        cin>>n;
        soPhong=n;
        room.resize(n);
        for(int i=0;i<n;i++){
            cout<<"Nhap thong tin phong thu "<<i+1<<": \n";
            PhongTro a;
            a.DangKyPhong();
            room[i]=a;
        }
    }
    void ThemPhong(){
        PhongTro a;
        a.DangKyPhong();
        room.push_back(a);
    }
    void HienThiTienDien(){
        int chon;
        cout<<"Nhap so thu tu phong: ";
        cin>>chon;
        if(chon<=0||chon>room.size()) cout<<"So thu tu khong hop le!";
        else cout<<"Tien dien cua phong thu "<<chon<<" la: "
        <<room[chon-1].TinhTienDien()<<" VND\n";
    }
    void HienThiTienNuoc(){
        int chon;
        cout<<"Nhap so thu tu phong: ";
        cin>>chon;
        if(chon<=0||chon>room.size()) cout<<"So thu tu khong hop le!";
        else cout<<"Tien nuoc cua phong thu "<<chon<<" la "
        <<room[chon-1].TinhTienNuoc()<<" VND\n";
    }
    void CapNhatSoDienVaNuoc(){
        int chon;
        cout<<"Nhap so thu tu phong: ";
        cin>>chon;
        if(chon<=0||chon>room.size()) cout<<"So thu tu khong hop le!";
        else room[chon-1].CapNhatSoDienVaNuocMoi();
    }
    void HoaDonTienNha(){
        int chon;
        cout<<"Nhap so thu tu phong can xuat hoa don: ";
        cin>>chon;
        if(chon<=0||chon>room.size()) cout<<"So thu tu khong hop le!";
        else room[chon-1].HoaDon();
    }
    void GiaoDien(){
            system("cls");
            int chon;
            do{
            cout<<"Chuong trinh tinh tien phong\n";
            cout<<"1. Khoi tao du lieu quan ly phong tro\n";
            cout<<"2. Them thong tin phong tro\n";
            cout<<"3. Cap nhat so dien va nuoc\n";
            cout<<"4. Hien thi thong tin tien dien\n";
            cout<<"5. Hien thi thong tin tien nuoc\n";
            cout<<"6. Hoa don tien nha thang\n";
            cout<<"7. Thoat\n";
            cout<<"Vui long nhap lua chon: ";
            cin>>chon;
            switch(chon){
                case 1: KhoiTaoSo(); break;
                case 2: ThemPhong(); break;
                case 3: CapNhatSoDienVaNuoc(); break;
                case 4: HienThiTienDien(); break;
                case 5: HienThiTienNuoc(); break;
                case 6: HoaDonTienNha(); break;//khi tinh hoa don thi ket thuc luon chuong tirnh
            }
            } while(chon < 7);
        }
};
int main()
{
    SoQuanLy x;
    x.GiaoDien();
    return 0;
}
