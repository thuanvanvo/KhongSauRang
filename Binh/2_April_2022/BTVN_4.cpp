// BTVN_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Finding 1: Please follow the template as Template.cpp
#include <iostream>
using namespace std;

int main()
{   
    int a[100];
    int n;
	//Finding 2: The initial value of 'max' and 'max1' seems incorrect.
    int max = 0;
    int max1 = 0;
    cout << " nhap so phan tu mang: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "nhap mang " << endl;
        cin >> a[i];
   }
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
		//Finding 3: Why does 'j' start at i-1?
		//Maybe there are too many loops executed.
        for (int j = i - 1; j < n; j++) {
            if (a[j] < max && a[j] > max1) {
                max1 = a[j];
            }
        }
    }
    cout << "so lon thu 2 la: " << max1;
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
