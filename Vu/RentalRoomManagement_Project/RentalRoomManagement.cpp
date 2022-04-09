/******************************************************************************

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
       unsigned int soDienCu;
       unsigned int soDienMoi;
       unsigned int soNuocCu;
       unsigned int soNuocMoi;
    public:
        int GetSoPhong(){
            return soPhong;
        }
        unsigned int GetGiaPhong(){
            return giaPhong;
        }
        unsigned int GetSoDienCu(){
            return soDienCu;
        }
        unsigned int GetSoDienMoi(){
            return soDienMoi;
        }
        unsigned int GetSoNuocCu(){
            return soNuocCu;
        }
        unsigned int GetSoNuocMoi(){
            return soNuocMoi;
        }
        
        
        int SetSoPhong(int soPhong){
            this->soPhong = soPhong;
        }
        unsigned SetGiaPhong(unsigned int giaPhong){
            this->giaPhong = giaPhong;
        }
        unsigned SetSoDienCu(unsigned int soDienCu){
            this->soDienCu = soDienCu;
        }
        unsigned SetSoDienMoi(unsigned int soDienMoi){
            this->soDienMoi = soDienMoi;
        }
        unsigned SetSoNuocCu(unsigned int soNuocCu){
            this->soNuocCu = soNuocCu;
        }
        unsigned SetSoNuocMoi(unsigned int soNuocMoi){
            this->soNuocMoi = soNuocMoi;
        }
        

       void DangKyPhong(){
           cout<<"Dang ky phong o: \n";
            cin>>soPhong;
           
           
           cout<<"Gia phong muon thue: \n";
           cin>>giaPhong;
           
           cout<<"Nhap so dien cu: \n";
           cin>>soDienCu;
           soDienMoi = soDienCu;

           
           cout<<"Nhap so nuoc cu: ";
           cin>>soNuocCu;
           soNuocMoi = soNuocCu;
           
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
        
        void CapNhatSoDienNuoc(){
            int chonPhong;
            unsigned int dienMoi, nuocMoi;
            cout<<"Chon Phong cap nhat so Dien, Nuoc: ";
            cin >>chonPhong;
           for(int i = 0; i < room.size(); i++){
               if(room[i].GetSoPhong() == chonPhong ){
                 cout<<"Nhap so Dien moi: ";
                 cin>>dienMoi;
                 room[i].SetSoDienCu(room[i].GetSoDienMoi());
                 room[i].SetSoDienMoi(dienMoi);
                 cout<<"Nhap so Nuoc moi: ";
                 cin>>nuocMoi;
                 room[i].SetSoNuocCu(room[i].GetSoNuocMoi());
                 room[i].SetSoNuocMoi(nuocMoi);
               }
               
           }
           cout<<"Cap nhat thanh cong!";
         
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
        
        void TienDienNhieuNhat(){
            int phong;
            unsigned int Max = room[0].TinhTienDien();
            for (int i = 0; i < room.size(); i ++){
                if (room[i].TinhTienDien()>Max)
                Max = room[i].TinhTienDien();
                phong = i+1;
            }
            for (int i = 0; i < room.size(); i ++){
                if(i != phong && room[i].TinhTienDien()==Max)
                cout<<"Phong thu "<<i+1<<" su dung nhieu dien nhat voi "
                <<Max<<" VND \n";
            }
            cout<<"Phong thu "<<phong<<" su dung nhieu dien nhat voi "
                <<Max<<" VND \n";
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
            cout<<"7. Phong su dung Dien nhieu nhat\n";
            cout<<"8. Thoat\n";
            cout<<"Vui long nhap lua chon: ";
            cin>>chon;
            switch(chon){
                case 1: KhoiTaoSo(); break;
                case 2: ThemPhong(); break;
                case 3: CapNhatSoDienNuoc(); break;
                case 4: XuatHoaDonTienDien(); break;
                case 5: XuatHoaDonTienNuoc(); break;
                case 6: XuatHoaDonTienNha(); break;
                case 7: TienDienNhieuNhat(); break;
            }
            } while(chon != 8);
        }
    
    
   };
int main()
{
   SoQuanLy x;
   x.GiaoDien();
    
    return 0;
}
