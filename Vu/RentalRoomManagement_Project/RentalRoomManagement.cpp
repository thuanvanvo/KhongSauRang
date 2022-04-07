/******************************************************************************

*******************************************************************************/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class PhongTro{
    private: 
       string soPhong;
       unsigned int giaPhong;
       unsigned int soDienCu;
       unsigned int soDienMoi;
       unsigned int soNuocCu;
       unsigned int soNuocMoi;
    public:
       void DangKyPhong(){
           cout<<"Dang ky phong o: \n";
           getline(cin, soPhong);
           cin.ignore();
           
           cout<<"Nhap so dien cu: \n";
           cin>>soDienCu;
           soDienMoi = soDienCu;

           
           cout<<"Nhap so nuoc cu: ";
           cin>>soNuocCu;
           soNuocMoi = soNuocCu;
       }
       
       void CapNhatSoDienNuoc(){
           cout<<"Nhap so dien moi: ";
           soDienCu = soDienMoi;
           cin>>soDienMoi;
           
           cout<<"Nhap so nuoc moi: ";
           soNuocCu = soNuocMoi;
           cin>>soNuocMoi;
         
       }
       unsigned int TinhTienDien(){
            return (soDienMoi - soDienCu)*3500;
            
       }
       unsigned int TinhTienNuoc(){
           return (soNuocMoi - soNuocCu)*15000;
       }
       
       unsigned int TinhTienPhong(){
           cout <<"Nhap gia phong: ";
           cin >>giaPhong;
           return (TinhTienNuoc() + TinhTienDien() + giaPhong);
       }
}; 

class SoQuanLy{
    private:
        int soPhong;
        vector <PhongTro> room;
    public:
        void KhoiTaoSo(){//Nhap so luong phong va thong tin ca phong
            int n;
            cout<<"Nhap tong so phong: ";
            cin>>n;
            soPhong = n;
            room.resize(n);
            for (int i = 0; i < n; i ++){
                cout<<"Nhap thong tin phong thu "<<i+1<<": \n";
                PhongTro a;
                a.DangKyPhong();
                room[i] = a;
            }
        }
        

        void ThemPhong(){
            PhongTro a;
            a.DangKyPhong();
            room.push_back(a);
        } 
         
            
        void XuatHoaDonTienDienNuoc(){
            int chon;
            cout<<"Nhap so thu tu Phong: ";
            cin>> chon;
            if(chon <=0 || chon > room.size()) cout <<"So Phong k hop le!";
            else {
                cout<<"tien dien Phong "<<chon<<" la:"
                    <<room[chon-1].TinhTienDien()<<"\n";
                cout<<"tien nuoc Phong "<<chon<<" la:"
                    <<room[chon-1].TinhTienNuoc()<<"\n";
                cout<<"Tong tien Dien Nuoc la:"
                <<room[chon-1].TinhTienDien()+room[chon-1].TinhTienNuoc()<<"\n";
                
            }   
        }
         
            
        void HienThiCapNhatDienNuoc(){
            int chon;
            cout<<"Nhap so thu tu Phong: ";
            cin>> chon;
            if(chon <=0 || chon > room.size()) cout <<"So Phong k hop le!";
            else room[chon-1].CapNhatSoDienNuoc();
            cout<<"Cap nhat dien nuoc thanh cong! \n";
        }    
            
        void GiaoDien(){
            int chon;
            do{
            system("cls");
            cout<<"CHUONG TRINH QUAN LY PHONG TRO\n";
            cout<<"1. Khoi tao du lieu quan ly\n";
            cout<<"2. Them phong tro\n";
            cout<<"3. Cap nhat so dien nuoc\n";
            cout<<"4. Tinh tien Dien Nuoc\n";
            cout<<"5. Thoat\n";
            cout<<"Vui long nhap lua chon: ";
            cin>>chon;
            switch(chon){
                case 1: KhoiTaoSo(); break;
                case 2: ThemPhong(); break;
                case 3: HienThiCapNhatDienNuoc(); break;
                case 4: XuatHoaDonTienDienNuoc(); break;
            }
            } while(chon != 5);
        }
    
    
   };
int main()
{
   SoQuanLy x;
   x.GiaoDien();
    
    return 0;
}
