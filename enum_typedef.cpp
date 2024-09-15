#include<iostream>
using namespace std;


// enum is used for creating a new datatype using existing datatypes
enum day {mon,tue,wed,thu,fri,sat,sun};

// typedef is used to define our own datatype 

typedef int marks;

int main(int argc, char const *argv[])
{
    day d;
    d = mon;
    cout<<d;

    marks m1,m2;
    m1 = 30;
    m2 = 50;
    // m1 and m2 are for string marks and of type int

    return 0;
}
