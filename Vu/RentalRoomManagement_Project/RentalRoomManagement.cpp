/******************************************************************************

*******************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
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
       
       void TinhTienPhong(){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            cout <<"Nhap gia phong: ";
            cin >>giaPhong;
            cout<<"Tong tien thue Phong "<<soPhong<<" thang "<<1 + ltm->tm_mon
            <<" la: "<<(TinhTienNuoc()+TinhTienDien()+giaPhong)<<"\n"
            <<"Trong do: \n"
            <<"Tien Phong la:"<<giaPhong<<"\n"
            <<"Tien Dien la: "<<TinhTienDien()<<"\n"
            <<"Tien Nuoc la: "<<TinhTienNuoc()<<"\n";
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
         
        void HienThiCapNhatDienNuoc(){
            int chon;
            cout<<"Nhap so thu tu Phong: ";
            cin>> chon;
            if(chon <=0 || chon > room.size()) cout <<"So Phong k hop le!";
            else room[chon-1].CapNhatSoDienNuoc();
            cout<<"Cap nhat dien nuoc thanh cong! \n";
        }   
        
        void XuatHoaDonTienDien(){
            int chon;
            cout<<"Nhap so thu tu Phong: ";
            cin>> chon;
            if(chon <=0 || chon > room.size()) cout <<"So Phong k hop le!";
            else {
                cout<<"tien dien Phong "<<chon<<" la:"
                    <<room[chon-1].TinhTienDien()<<"\n";
            }   
        }
         
    
        void XuatHoaDonTienNuoc(){
            int chon;
            cout<<"Nhap so thu tu Phong: ";
            cin>> chon;
            if(chon <=0 || chon > room.size()) cout <<"So Phong k hop le!";
            else {
                cout<<"tien nuoc Phong "<<chon<<" la:"
                    <<room[chon-1].TinhTienNuoc()<<"\n";
            
            }   
        }
        
         void XuatHoaDonTienNha(){
            int chon;
            cout<<"Nhap so thu tu Phong: ";
            cin>> chon;
            if(chon <=0 || chon > room.size()) cout <<"So Phong k hop le!";
            else {
                room[chon-1].TinhTienPhong();
            }   
        }
        
        void GiaoDien(){
            int chon;
            do{
            system("cls");
            cout<<"CHUONG TRINH QUAN LY PHONG TRO\n";
            cout<<"1. Khoi tao du lieu quan ly\n";
            cout<<"2. Them Phong tro\n";
            cout<<"3. Cap nhat so Dien, Nuoc\n";
            cout<<"4. Tinh tien Dien\n";
            cout<<"5. Tinh tien Nuoc\n";
            cout<<"6. Tong tien thue Phong\n";
            cout<<"7. Thoat\n";
            cout<<"Vui long nhap lua chon: ";
            cin>>chon;
            switch(chon){
                case 1: KhoiTaoSo(); break;
                case 2: ThemPhong(); break;
                case 3: HienThiCapNhatDienNuoc(); break;
                case 4: XuatHoaDonTienDien(); break;
                case 5: XuatHoaDonTienNuoc(); break;
                case 6: XuatHoaDonTienNha(); break;
            }
            } while(chon != 7);
        }
    
    
   };
int main()
{
   SoQuanLy x;
   x.GiaoDien();
    
    return 0;
}
