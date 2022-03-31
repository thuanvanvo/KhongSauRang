#include <iostream>
using namespace std;
int main()
{
	int a[10] = { 2,3,4,5,6,7,8,9,9,8 };
	int sumTodoi = 0;
	int sumdemtodoi = a[0];
	int todoi = 1;
	int n;
	cout << "nhap thanh vien can tim: " << endl;
	cin >> n;
	for (int i = 0; i < 10; i++) {
		sumTodoi = sumTodoi + a[i];
	}
	for (int i = 0; i < 10; i++) {
		if (sumTodoi < n) {
			cout << "Thanh vien khong thuoc tieu doi nao";
		}
		else {
			for (int i = 0; i < 9; i++) {
				if (sumdemtodoi < n) {
					sumdemtodoi = sumdemtodoi + a[i + 1];
					todoi++;
				}
				else break;
			}
		}
		
	}
	cout << "thanh vien " << n << " thuoc to doi so " << todoi;
