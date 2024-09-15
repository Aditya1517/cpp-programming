#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int year;
    cout<<"Enter the year which you want to check"<<endl;
    cin>>year;
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                cout<<"This is leap year";
            }
            else{
                cout<<"This is not leap year";
            }
        }
            cout<<"This is a leap year";
    }
    else{
        cout<<"This is not a leap year";
    }
    return 0;
}
