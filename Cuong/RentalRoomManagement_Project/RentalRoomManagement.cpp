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
  public:
    int GetSoPhong(){
        return soPhong;
    }
    void SetSoPhong(int soPhong){
        this->soPhong=soPhong;
    }
    int GetGiaPhong(){
        return giaPhong;
    }
    void SetGiaPhong(int giaPhong){
        this->giaPhong=giaPhong;
    }
    int GetSoNuocMoi(){
        return soNuocMoi;
    }
    void SetSoNuocMoi(int soNuocMoi){
        this->soNuocMoi=soNuocMoi;
    }
    int GetSoNuocCu(){
        return soNuocCu;
        }
    void SetSoNuocCu(int soNuocCu){
        this->soNuocCu=soNuocCu;
    }
      int GetSoDienMoi(){
        return soDienMoi;
    }
    void SetSoDienMoi(int soDienMoi){
        this->soDienMoi=soDienMoi;
    }
    int GetSoDienCu(){
        return soDienCu;
        }
    void SetSoDienCu(int soDienCu){
        this->soDienCu=soDienCu;
    }
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
        bool value=false;
        cout<<"Nhap so phong can hien thi tien dien: ";
        cin>>chon;
        for(int i=0;i<room.size();i++){
            if(room[i].GetSoPhong()==chon){
                value=true;
                cout<<"So tien dien cua phong so "<<chon<<" la: "
                << (room[i].GetSoDienMoi() - room[i].GetSoDienCu())*3500<<" VND";
                break;
            }
        }
        if(value==false) cout<<"So phong khong hop le!";
    }
    void HienThiTienNuoc(){
        int chon;
        bool value=false;
        cout<<"Nhap so phong can hien thi tien nuoc: ";
        cin>>chon;
        for(int i=0;i<room.size();i++){
            if(room[i].GetSoPhong()==chon){
                value=true;
                cout<<"So tien nuoc cua phong so "<<chon<<" la: "
                << (room[i].GetSoNuocMoi() - room[i].GetSoNuocCu())*15000<<" VND";
                break;
            }
        }
        if(value==false) cout<<"So phong khong hop le!";
    }
    void CapNhatSoDienVaNuoc(){
        int chon;
        bool value=false;
        int dienMoi;
        int nuocMoi;
        cout<<"Nhap so phong can cap nhat dien va nuoc: ";
        cin>>chon;
        for(int i=0;i<room.size();i++){
            if(room[i].GetSoPhong()==chon){
                value=true;
                cout<<"So nuoc moi: ";
                cin>>nuocMoi;
                cout<<"so dien moi: ";
                cin>>dienMoi;
                if(nuocMoi>=room[i].GetSoNuocMoi()&&dienMoi>=room[i].GetSoDienMoi()){
                room[i].SetSoDienCu(room[i].GetSoDienMoi());
                room[i].SetSoNuocCu(room[i].GetSoNuocMoi());
                room[i].SetSoDienMoi(dienMoi);
                room[i].SetSoNuocMoi(nuocMoi);
                break;
                }
                else cout<<"So dien nuoc moi khong hop le!";
            }
            }
        if(value==false) cout<<"So phong khong hop le!";
    }
    void HoaDonTienNha(){
        time_t now = time(0);
        tm *ltm = localtime(&now);
        int chon;
        bool value=false;
        cout<<"Nhap so phong can xuat hoa don tien nha: ";
        cin>>chon;
        for(int i=0;i<room.size();i++){
            if(room[i].GetSoPhong()==chon){
                value=true;   
                cout<<"Hoa don tien nha thang "<<1 + ltm->tm_mon<<" nam "
                <<1900 + ltm->tm_year<<"\n";
                cout<<"So phong: "<<room[i].GetSoPhong()<<"\n";
                cout<<"Tien thue nha: "<<room[i].GetGiaPhong()<<" VND\n";
                cout<<"Tien dien: "<<(room[i].GetSoDienMoi() - 
room[i].GetSoDienCu())*3500<<" VND\n";
                cout<<"Tien nuoc: "<<(room[i].GetSoNuocMoi() -
room[i].GetSoNuocCu())*15000<<" VND\n";
                cout<<"Tong hoa don: "<<room[i].GetGiaPhong()+
((room[i].GetSoDienMoi()-room[i].GetSoDienCu())*3500)+((room[i].GetSoNuocMoi() -
room[i].GetSoNuocCu())*15000)<<" VND\n";
        break;
        }
    }
    if(value==false) cout<<"So phong khong hop le!";
    }
    void PhongCoTienDienNhieuNhat(){
        unsigned long int Max=0;
        cout<<"Phong co tien dien cao nhat la phong so: ";
        for(int i=0;i<room.size();i++){
            if(room[i].GetSoDienMoi() - room[i].GetSoDienCu()>Max){ 
            Max=(room[i].GetSoDienMoi() - room[i].GetSoDienCu());
            }
        }
        for(int i=0;i<room.size();i++){
            if(room[i].GetSoDienMoi() - room[i].GetSoDienCu()==Max){ 
            cout<<i+1<<" ";
            }
        }
        cout<<"\n";
    }
    void GiaoDien(){
            system("cls");
            int chon;
            do{
            cout<<"\nChuong trinh tinh tien phong\n";
            cout<<"1. Khoi tao du lieu quan ly phong tro\n";
            cout<<"2. Them thong tin phong tro\n";
            cout<<"3. Cap nhat so dien va nuoc\n";
            cout<<"4. Hien thi thong tin tien dien\n";
            cout<<"5. Hien thi thong tin tien nuoc\n";
            cout<<"6. Hoa don tien nha thang\n";
            cout<<"7. Phong co tien dien nhieu nhat\n";
            cout<<"8. Thoat\n";
            cout<<"Vui long nhap lua chon: ";
            cin>>chon;
            switch(chon){
                case 1: KhoiTaoSo(); break;
                case 2: ThemPhong(); break;
                case 3: CapNhatSoDienVaNuoc(); break;
                case 4: HienThiTienDien(); break;
                case 5: HienThiTienNuoc(); break;
                case 6: HoaDonTienNha(); break;
                case 7: PhongCoTienDienNhieuNhat(); break;
            }
            } while(chon < 8);
        }
};
int main()
{
    SoQuanLy x;
    x.GiaoDien();
    return 0;
}
