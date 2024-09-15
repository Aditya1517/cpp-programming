#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // int a = 34;
    // cout<<"The value of a was "<<a<<endl;
    // a = 45;
    // cout<<"The value of a is "<<a<<endl;
    
    // CONSTANTS in C++

    // const a = 34;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45; // You will get an error because a is a constant
    // cout<<"The value of a is: "<<a<<endl;

    // MANIPULATORS in C++
    int a = 4 , b = 44 , c = 444;
    cout<<"The vaule of a without setw is: "<<a<<endl;
    cout<<"The vaule of b without setw is: "<<b<<endl;
    cout<<"The vaule of c without setw is: "<<c<<endl;

    cout<<"The vaule of a with setw is: "<<setw(4)<<a<<endl;
    cout<<"The vaule of b with setw is: "<<setw(4)<<b<<endl;
    cout<<"The vaule of c with setw is: "<<setw(4)<<c<<endl;

    // Operator Precedence
    int p = 4 , q = 6;
    int r = ((((p*5)+q)-45)+54);
    cout<<r;
    

    return 0;
}
