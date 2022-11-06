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
    int a,b,c,choice;
    cout<<"Enter number"<<endl;
    cout<<"------------"<<endl;
    cout<<"Enter the first number"<<endl;
    cin >> a;
    cout<<"Enter the second number"<<endl;
    cin>>b; 
    cout<<"choose 1 for addition"<<endl;
    cout<<"choose 2 for substraction"<<endl;
    cout<<"choose 3 for multiplication"<<endl;
    cout<<"choose 4 for division"<<endl;
    cout<<"choose 5 for modulus"<<endl;
    
    cin>>choice;
    
    switch(choice){
        case 1:{
            c=a+b;
            cout<<"Answer is: "<<c;
            break;
        }
        case 2:{
            c=a-b;
            cout<<"Answer is: "<<c;
            break;
        }
        case 3:{
            c=a*b;
            cout<<"Answer is: "<<c;
            break;
        }
        case 4:{
            c=a/b;
            cout<<"Answer is: "<<c;
            break;
        }
        case 5:{
            c=a%b;
            cout<<"Answer is: "<<c;
            break;
        }
        default:
        cout<<"You are out of choice";
    }
    
    return 0;
}
