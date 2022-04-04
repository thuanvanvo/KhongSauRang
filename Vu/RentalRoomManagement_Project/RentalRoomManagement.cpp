/******************************************************************************

*******************************************************************************/

#include <iostream>
#include <vector>

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
           cout<<"Dang ky phong o: ";
           getline(cin, soPhong);
           
           cout<<"Nhap so dien cu: ";
           cin>>soDienCu;
           soDienMoi = soDienCu;
           
           cout<<"Nhap so nuoc cu: ";
           cin>>soNuocCu;
           soNuocMoi = soNuocCu;
       }
       
       void CapNhatTienDienNuoc(){
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
       
        
    
   };
int main()
{
   PhongTro a;
   a.DangKyPhong();
   a.CapNhatTienDienNuoc();
   cout<<a.TinhTienDien()<<"\n";
   cout<<a.TinhTienNuoc();
    
    
    
    

    

    return 0;
}
