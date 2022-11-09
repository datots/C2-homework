/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3;
    cout << "შეიყვანეთ ციფრი: ";
    cin >>num1;
    cout << "შეიყვანეთ ციფრი: ";
    cin>>num2;
    cout << "შეიყვანეთ ციფრი: ";
    cin>>num3;
    
    
    
    if(num1>=num2 && num1>=num3){
        cout<<"მაქსიმალური: "<<num1;
        
    }else if(num2>=num1 && num2>=num3){
        cout<<"მაქსიმალური: "<<num2;
        
    }else if(num3>=num1 && num3>=num2){
        cout<<"მაქსიმალური: "<<num3;
    }

    return 0;
}
