// BTVN_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Finding 1: Please follow the template as Template.cpp
#include <iostream>
using namespace std;
int SumOfArray (int a[], int n) {
    int sum = 0;
	//Finding 2: The input process should not be in this function.
    for (int i = 0; i <n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
       
        sum = sum + a[i];
    }
    return sum;
}
int main()
{
    int a[1000];
    int n;
    cout << " nhap mang: " << endl;
    cin >> n;
   
    cout << "tong cua mang la " << SumOfArray(a, n);

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
