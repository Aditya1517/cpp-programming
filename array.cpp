#include<iostream>
using namespace std;

int main()
{
    // array ---> it is a collection of similar type of storage 
    // you can change the value of array

    // int marks[4] = {23,32,42,45};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // cout<<"These are marks"<<endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<marks[i]<<endl;
    // }

    int marks[4] = {23,32,42,45};
    int i = 0;
    while (i<4)
    {
       cout<<"The mark of "<<i<<" is "<<marks[i]<<endl;
       i++; 
    }

    // Pointers and arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    
    

    return 0;
}
