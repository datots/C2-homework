/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int year;
    cout<<"Please enter the year: ";
    cin >> year;
    
    
    if((year % 400==0 || year % 100 != 0) &&(year % 4==0)){
        cout << "Leap year";
    }else{
        cout<<"Not leap year";
    }

    return 0;
}
