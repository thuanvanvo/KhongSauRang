#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;
class PhongTro {
private:
	int phongSo;
	int giaTien;
	unsigned int soNuocmoi;
	unsigned int soDienmoi;
	unsigned int soDiencu;
	unsigned int soNuoccu;
public:
	int getPhongSo() {
		return phongSo;
	}
	void setPhongSo(int phongSo) {
		this->phongSo = phongSo;
	}
	int getgiaTien() {
		return giaTien;
	}
	void setgiaTien(int giaTien) {
		this->giaTien = giaTien;
	}
	int getsoNuocmoi() {
		return soNuocmoi;
	}
	void setsoNuocmoi(int soNuocmoi) {
		this->soNuocmoi = soNuocmoi;
	}
	int getsoNuoccu() {
		return soNuoccu;
	}
	void setsoNuoccu(int soNuoccu) {
		this->soNuoccu = soNuoccu;
	}
	int getsoDienmoi() {
		return soDienmoi;
	}
	void setsoDienmoi(int soDienmoi) {
		this->soDienmoi = soDienmoi;
	}
	int getsoDiencu() {
		return soDiencu;
	}
	void setsoDiencu(int soDiencu) {
		this->soDiencu = soDiencu;
	}
	void DangKyPhong() {

		cout << "so phong ";
		cin >> phongSo;
		cout << "gia tien mot thang: ";
		cin >> giaTien;
		cout << "so dien thang truoc ";
		cin >> soDiencu;

		cout << "so nuoc thang truoc ";
		cin >> soNuoccu;
		soDienmoi = soDiencu;
		soNuocmoi = soNuoccu;
	}
	unsigned long int TinhTienDien() {
		return(soDienmoi - soDiencu) * 3500;
	}
	unsigned long int TinhTienNuoc() {
	return(soNuocmoi - soNuoccu)* 15000;
	}
	unsigned long int TinhTongTienPhong() {
	return giaTien + TinhTienDien() + TinhTienNuoc();
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
		room.push_back(a);
	}
	void UpdateWaterAndElectric() {
		int n;
		int dienmoi;
		int nuocmoi;
		cout << "so phong can cap nhat so dien va so nuoc: " << "\n";
		cin >> n;
		for (int i = 0; i < room.size(); i++) {
			if (room[i].getPhongSo() == n) {
				room[i].setsoDiencu(room[i].getsoDienmoi());
				cout << "so dien moi" << endl;
				cin >> dienmoi;
				room[i].setsoDienmoi(dienmoi);
				break;
			}
			else cout << "so phong khong hop le";
		}
		for (int i = 0; i < room.size(); i++){
				if (room[i].getPhongSo()==n)
				}
				room[i].setsoNuoccu(room[i].getsoNuocmoi());
				cout << "so nuoc moi" << endl;
				cin >> nuocmoi;
				room[i].setsoNuocmoi(nuocmoi);
				break;
			}
			else cout << "so phong khong hop le";
		}
	}
	void HienThiTienDien() {
		cout << "Nhap so phong: ";
		int chon;
		cin >> chon;
		for (int i = 0; i < room.size(); i++) {
			if (room[i].getPhongSo() == chon) {
				cout << "Phong so " << chon << "co tien dien la " << room[i].TinhTienDien() << endl;
			}
			else cout << "so phong khong hop le";
		}
	}
	void HienThiTienNuoc() {
		cout << "Nhap so phong: ";
		int chon;
		cin >> chon;
		for (int i = 0; i < room.size(); i++) {
			if (room[i].getPhongSo() == chon) {
				cout << "Phong so " << chon << "co tien dien la " << room[i].TinhTienNuoc() << endl;
			}
			else cout << "so phong khong hop le";
		}
	}
	void HienThiHoaDonTienNha() {
		cout << "Nhap so cua phong: can xuat hoa don tien nha\n";
		int chon;
		cin >> chon;
		time_t now = time(0);
		tm* ltm = localtime(&now);
		for (int i = 0; i < room.size(); i++) {
			if (room[i].getPhongSo() == chon) {
				cout << "Hoa don tien nha thang " << 1 + ltm->tm_mon << " nam " << 1900 + ltm->tm_year << "\n";
				cout << "phong so: " << room[i].getPhongSo() << endl;
				cout << "gia phong: " << room[i].getgiaTien() << endl;
				cout << "tien dien " << room[i].TinhTienDien() << endl;
				cout << "tien nuoc " << room[i].TinhTienNuoc() << endl;
				cout << "hoa don tien phong " << chon << "la : " << room[i].TinhTongTienPhong() << endl;
				system("pause");
			}
			else cout << "so phong khong hop le";
		}
	}
	void MaxPriceElectric() {
		int Max = 0;
		int roomMax = 0;
		for (int i = 0; i < room.size(); i++) {
			if (room[i].TinhTienDien() > Max)
				Max = room[i].TinhTienDien();
			roomMax = i + 1;
			cout << "phong co tien dien nhieu nhat la: " << roomMax << "\n";
			system("pause");
		}
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
			cout << "5. tien nuoc phong\n";
			cout << "6. hoa don tien phong\n";
			cout << "7. Phong xai dien hao nhat\n";
			cout << "8. thoat\n";
			cout << "vui long nhap lua chon";
			cin >> chon;
			switch (chon) {
			case 1: KhoiTaoSo(); break;
			case 2: ThemPhong(); break;
			case 3: UpdateWaterAndElectric(); break;
			case 4: HienThiTienDien(); break;
			case 5: HienThiTienNuoc(); break;
			case 6: HienThiHoaDonTienNha(); break;
			case 7: MaxPriceElectric(); break;
			}
		} while (chon != 8);
	}
};
int main() {
	SoQuanLy x;
	x.GiaoDien();
	return 0;
}
