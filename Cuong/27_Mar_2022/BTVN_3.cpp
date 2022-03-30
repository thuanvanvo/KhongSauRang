/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void AreaOfSquare(int Side, int* Area){ // Cap dia chi bien x, bien y
   cout << "Area: ";
   cin>>Side;
   *Area=Side*Side;
}
int main()
{
    int Side;
    int Area;
    AreaOfSquare(Side,&Area);
    cout<<"Area = "<<Area;
    return 0;
}
