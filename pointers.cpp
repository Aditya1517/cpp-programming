#include <iostream>
using namespace std;

// int main()
//     {
        // What is pointers ? ---> Pointers are datatype which holds the address of other data types

//int a = 3;
// int *b = &a;

// & --> is a (address of) oparator

// cout << "The address of a is " << &a << endl;
// cout << "The address of a is " << b << endl;

// * --> is a (value at) dereference oparator

// cout << "The value at address b is " << *b << endl;

    // Pointer to pointer

// int **c = &b;
// cout << "The address of b is " << &b << endl;
// cout << "The address of b is " << c << endl;
// cout << "The value of address c is " << c << endl;
// cout << "The value at address value at(value at(c)) is " << **c << endl;

// return 0;
// }

// int main()
// {
//     int x=10;
//     int *p; // initialization
//     p=&x; // declaration
//     cout<<x<<endl;
//     cout<<&x<<endl;
//     cout<<p<<endl;
//     cout<<&p<<endl;
//     cout<<*p<<endl; // derefrencing
//     return 0;
// }

// pointers are used to access heap memory
// heap memory is there as long as your programme is running
// while stack memory will automatically get deleted when it gets out of the scope

// heap memory allocation

// int main()
// {
//     int a[5]={1,2,3,4,5}; // stored in stack memory
//     int *p; // stored in heap memory
//     p=new int[5]; // stored in heap memory

// as heap memorey is allocated dynamically we must have to delete this memorey coz it is there for 
// always and it creates a memorey leak problem

//     delete []p; // deallocation
//     return 0;
// }

// pointer arithmetics

int main()
{
    int a[5]={1,2,3,4,5};
    int d;
    int *p=a;
    cout<<p<<endl;
    int *q=&a[3];
    cout<<p++<<endl;
    cout<<p--<<endl;
    p = p +2;  // here + means not adding it means move to the other location
    cout<<p<<endl;
    p = p-2;
    cout<<p<<endl;
    d = q - p; // difference between two element thst is how much far is thar element form the other element
    cout<<d;
    return 0;
}
