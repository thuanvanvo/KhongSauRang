// BTVN_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
class HieuSach {
private:
    string tieude;
    string theloai;
    string tacgia;
    int giatien;
    int soluongtrongkho;
    int soluongmua;

public:
    void Nhap() {
        cout << "tieu de: ";
        getline(cin, tieude);
        cout << "the loai: ";
        getline(cin, theloai);
        cout << "tac gia:  ";
        getline(cin, tacgia);
        cout << "giatien ";
        cin >> giatien;
        cout << "so con ton trong kho ";
        cin >> soluongtrongkho;
        cout << "so luong mua: ";
        cin >> soluongmua;
        cout << "So tien phai thanh toan: " << soluongmua * giatien;
    }
    bool ConHang() {
        int hethang = true;
        if (soluongtrongkho > 0 && soluongtrongkho > soluongmua) {
            hethang = false;
        }
        if (hethang == true) cout <<"het hang";
        else cout << "con hang";
        return 0;
       
    }
    
};
int main()
{
    HieuSach n;
   
        cout << "thong tin va so tien thanh toan: ";
        n.Nhap();
        n.ConHang();
   
        
} 


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
