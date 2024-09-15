#include<iostream>
using namespace std;

int main()
{
    /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop
    */

    /*for loop in C++*/

    // Syntax for for loop
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    for (int i = 1;i<=20;i++)
    {
        cout<<i<<endl;
    }

    // Syntax:
    // while(condition)
    // {
    //     C++ statements;
    // }

    // printing 1 to 40 using while loop

    int a = 1;
    while (a<=40)
    {
        cout<<a<<endl;
        a++;
    }
    
    /* do While loop in C++*/
        // Syntax:
        // do
        // {
        //     C++ statements;
        // }while(condition);
        // do while loop ek bar to chalega hi chalega irrespective of condition 
    int b = 1;
    do
    {
        cout<<b<<endl;
        b++;
    } while (b<=34);
    

    return 0;
}
