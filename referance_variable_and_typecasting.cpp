#include<iostream>

using namespace std;

int c = 45;

int main()
{
    // *************Build in Data types****************
    // int a,b,c;
    // cout<<"Enter a number:"<<endl;
    // cin>>a;
    // cout<<"Enter a number:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum of two number is:"<<c<<endl;
    // cout<<"The value of globle c is "<<::c<<endl; /*'::' is called scope resolution opareator, for globle variable */

        // ************* Float, double and long double Literals****************
    // float d=34.4F;
    // long double e = 34.4L; 
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e; 

    // *************Reference Variables**************** 
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    float x = 455;
    float & y = x;
    cout<<x<<endl<<y;

    // *************Typecasting**************** 

    int p = 45;
    float q = 45.46;
    float r = 45.76;
    cout<<(float)p<<endl<<(int)q<<endl<<(int)r;

    cout<<"The value of b is "<<(int)q<<endl;
    cout<<"The value of b is "<<int(q)<<endl;
    int c = int(q);

    cout<<"The expression is "<<p + q<<endl;
    cout<<"The expression is "<<p + int(q)<<endl;
    cout<<"The expression is "<<p + (int)q<<endl;

    return 0;
}
