#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string name;
    cout<<"May I know your name?"<<endl;
    getline(cin,name); // getline is used to get input of more than one word 
    cout<<"Wel-come "<<name;
    return 0;
}
