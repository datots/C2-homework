/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
#define _USE_MATH_DEFINES


int main()
{
    float x1, x2, y1, y2;
    cout << "Enter X1 NUmber: ";
    cin >>x1 ;
    cout << "Enter X2 NUmber: ";
    cin >>x2 ;
    cout << "Enter Y1 NUmber: ";
    cin >>y1;
    cout << "Enter Y2 NUmber: ";
    cin >> y2;
    int distance;
    
    distance= sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
    cout << distance<<endl;
    return 0;
}
