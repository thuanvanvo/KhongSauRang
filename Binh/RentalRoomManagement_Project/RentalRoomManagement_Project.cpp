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
	void ThongTinPhong() {
		cout << "So phong:" << phongSo << "\n";
		cout << "tien phong: " << giaTien <<"\n";
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
	void HienThiTienDien() {
		cout << "Nhap so thu tu cua phong: ";
		int chon;
		cin >> chon;
		if (chon <= 0 || chon > room.size()) cout << "so thu tu phong khong hop le";
		else cout << "tien dien phong thu " << chon << "la : " << room[chon - 1].TinhTienDien();
		system("pause");
	}
	void HienThiTienNuoc() {
		cout << "Nhap so thu tu cua phong: ";
		int chon;
		cin >> chon;
		if (chon <= 0 || chon > room.size()) cout << "so thu tu phong khong hop le";
		else cout << "tien nuoc phong thu " << chon << "la : " << room[chon - 1].TinhTienNuoc();
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
	void HienThiHoaDonTienNha() {
		cout << "Nhap so thu tu cua phong: ";
		int chon;
		cin >> chon;
		time_t now = time(0);
		tm* ltm = localtime(&now);
		if (chon <= 0 || chon > room.size()) cout << "so thu tu phong khong hop le";
		else { 
			cout << "hoa don tien nha thang " << 1 + ltm->tm_mon << "\n";
			cout << "thong tin phong" << "\n";
			room[chon - 1].ThongTinPhong();
			cout << "tien dien " << room[chon - 1].TinhTienDien() << "\n";
			cout << "tien nuoc " << room[chon - 1].TinhTienNuoc() << "\n";
			cout << "hoa don tien phong " << chon << "la : " << room[chon - 1].TinhTongTienPhong();
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
			cout << "7. thoat\n";
			cout << "vui long nhap lua chon";
			cin >> chon;
			switch (chon) {
			case 1: KhoiTaoSo(); break;
			case 2: ThemPhong(); break;
			case 3: HienThiCapNhatDienNuoc(); break;
			case 4: HienThiTienDien(); break;
			case 5: HienThiTienNuoc(); break;
			case 6: HienThiHoaDonTienNha(); break;
			}
		} while (chon != 7);
	}
};
int main() {
	SoQuanLy x;
	x.GiaoDien();
	return 0;
}
