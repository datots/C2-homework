/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float fahrenheit, celsius;
    int choice;
    
    cout << "Enter 1 : Fahrenheit to celsius \nEnter 2 : Celsius to Fahrenheit" << endl;
    cin >> choice;
    
    if(choice == 1){
        cout<<"Enter the Fahrenheit value :"<<endl;
        cin>>fahrenheit;
        
        celsius=(fahrenheit-32) / 1.8;
        cout<<"It is "<<celsius<<" degree celsius" << endl;
    }
    else if(choice == 2){
        cout << "Enter the Celsius value :" << endl;
        cin >> celsius;

        fahrenheit = (1.8 * celsius) + 32;
        cout << "It is " << fahrenheit << " degree Fahrenheit" << endl;
        
    }
    else{
        cout << "Please enter a valid input" << endl;
    }

    return 0;
}
