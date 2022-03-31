// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


    
    

#include <iostream>
#include <string.h>
using namespace std;
	
int main() {
	char s[50] = " ";
	int max = 0, vitrimax = 0;
	int count = 0;
	int n = strlen(s);
	cout << "nhap chuoi ki tu: " << endl;
	gets_s(s);
	for (int i = 0; i < strlen(s); i++)
	{
		bool kt = true;
		for (int j = i - 1; j >= 0; j--) {
			if (s[i] == s[j])
			{
				kt = false;
				break;
			}
		}
		if (kt == true) {

			for (int k = 0; k < n; k++)
			{
				if (s[i] == s[k]) {
					count++;
				}
			}
		}
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				if (count > max) max = count;
				vitrimax = s[i];
			}
		}
		cout << " ky tu xuat hien nhieu nhat la " << s[i] << "voi so lan: " << count << endl;
	}
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
