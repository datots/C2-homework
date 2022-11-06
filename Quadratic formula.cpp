/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
      double a,b,c;
    cout <<"შეიყვანეთ კოეფიციენტები a-სი b-სი და c-სი: "<<endl;
    cin >> a>>b>>c;
    
    if(a==0.0){
        cout<<"UNDEFINED"<<endl;
        return 1;
    }
    
    double x1,x2;
    x1 = (-b + sqrt((b*b) - 4*a*c))/(2*a);
    x2 = (-b - sqrt((b*b) - 4*a*c))/(2*a);
    
    cout<<endl<<"ფესვი არის x1 = "<<x1<<" და x2 = "<<x2<<endl;

    return 0;
}
