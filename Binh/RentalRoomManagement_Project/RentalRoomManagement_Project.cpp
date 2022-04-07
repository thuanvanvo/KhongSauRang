// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class PhongTro {
private:
	int soPhong;
	int giaTien;
	unsigned int soNuocmoi;
	unsigned int soDienmoi;
	unsigned int soDiencu;
	unsigned int soNuoccu;
public:
	void DangKyPhong() {
		
		cout << "so phong ";
		cin >> soPhong;
		cout << "gia tien mot thang: ";
		cin >> giaTien;
		cout << "so dien thang truoc ";
		cin >> soDiencu;
		
		cout << "so nuoc thang truoc ";
		cin >> soNuoccu;
		soDienmoi = soDiencu;
		soNuocmoi = soNuoccu;
	}
	void UpdateNuocVaDien() {
		soDiencu = soDienmoi;
		soNuoccu = soNuocmoi;
		cout << "cap nhat so dien moi: ";
		cin >> soDienmoi;
		cout << "cap nhat so nuoc moi: ";
		cin >> soNuocmoi;
	}
	unsigned long int TinhTienDien() {
		return (soDienmoi - soDiencu) * 3500;
	}
	unsigned long int TinhTienNuoc() {
		return (soNuocmoi - soNuoccu) * 15000;
	}
	unsigned long int TinhTongTienPhong() {
		return giaTien + TinhTienNuoc() + TinhTienDien(); 
	}
};
class SoQuanLy {
private:
	int soPhong;
	vector <PhongTro> room;
public:
	void KhoiTaoSo() {
		int n;
		
		cout << " nhap tong so phong: ";
		cin >> n;
		room.resize(n);
		soPhong = n;
		for (int i = 0; i < n; i++) {
			cout << "Thong tin phong thu " << i + 1 << ": \n";
			PhongTro a;
			a.DangKyPhong();
			room[i] = a;
		}
	}
	void ThemPhong() {
		PhongTro a;
		a.DangKyPhong();
		room. push_back(a);

	}
	void HienThiTienDien() {
		cout << "Nhap so thu tu cua phong: ";
		int chon;
		cin >> chon;
		if (chon <= 0 || chon > room.size()) cout << "so thu tu phong khong hop le";
		else cout << "tien dien phong thu " << chon << "la : " << room[chon - 1].TinhTienDien();
		system("pause");
	}
	void HienThiCapNhatDienNuoc() {
		cout << "Nhap so thu tu cua phong: ";
		int chon;
		cin >> chon;
		if (chon <= 0 || chon > room.size()) cout << "so thu tu phong khong hop le";
		else cout << "dien va nuoc moi phong thu " << chon; "/n";
		room[chon - 1].UpdateNuocVaDien();
		
	}
	void GiaoDien() {
		int chon;
		do {
			system("cls");
			cout << "CHUONG TRINH QUAN LY PHONG TRO\n";
			cout << "1. Khoi tao du lieu quan ly \n";
			cout << "2. them thong tin phong tro \n";
			cout << "3. cap nhat dien va nuoc \n";
			cout << "4. tien dien phong\n";
			cout << "5. thoat\n";
			cout << "vui long nhap lua chon";
			cin >> chon;
			switch (chon) {
			case 1: KhoiTaoSo(); break;
			case 2: ThemPhong(); break;
			case 3: HienThiCapNhatDienNuoc(); break;
			case 4: HienThiTienDien(); break;
			}
		} while (chon != 5);
	}
};
int main() {
	SoQuanLy x;
	x.GiaoDien();
	return 0;
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
