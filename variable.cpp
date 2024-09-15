#include<iostream>

using namespace std;

int glo = 6;
void sum(){
    int a;
    cout<<glo;
}

int main(){
    // int a = 5;
    // int b = 6;
    int glo = 9;
    glo = 78;
    int a = 5 , b = 6;
    float pi = 3.14;
    char c = 'u';
    bool d = true;
    bool e = false;
    sum();
    cout<<glo;
    cout<<d;
    cout<<e;
    cout<<"\nThe value of a is "<<a<<". \nThe value of b is "<<b;
    cout<<"\nThe value of pi is "<<pi;
    cout<<"\nThe value of c is "<<c;
    return 0;
}
