#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers"<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"a is gratter number";
    }
    else{
        if(b>c){
            cout<<"b is gratter";
        }
        else{
            cout<<"c is gratter";
        }
    }

    return 0;
}