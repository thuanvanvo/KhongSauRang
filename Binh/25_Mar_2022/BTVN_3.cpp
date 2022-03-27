// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// cho chuỗi 1010101 kiểm tra chuỗi hợp lệ hay không và đếm số 1
#include <iostream>
using namespace std;
#include <string>
bool kiemtramatkhau(string matkhau) {
	if (matkhau.length() < 12)
		return false;
	string p = "!@#$%^&*()-+";
	string s = matkhau;
	bool kt1 = false;
	bool kt2 = false;
	bool kt3 = false;
	bool kt4 = false;
	for (int i = 0; i < matkhau.length(); i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
			kt1 = true;
		if (s[i] >= 97 && s[i] <= 122)
			kt2 = true;
		if (s[i] >= 48 && s[i] <= 57)
			kt4 = true;
		if (p.find(s[i]) != -1)
			kt3 = true;
	}
	return kt1 && kt2 && kt3 && kt4;
}



int main()
{
	string n, m;
	int i;
	cout << "dang ky mat khau: " << endl;
	getline(cin, n);
	for (int i = 0; i < i + 1; i++){
		
		if (kiemtramatkhau(m)) {
			cout << "mat khau dang ky thanh cong"; break;
		}
		else 
			cout << "mat khau yeu, nhap lai mat khau: ";
			getline(cin, m);
	}
	return 0;

}
		

