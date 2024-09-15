// Table 
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,table;
//     cout<<"Enter the number of which you want table:"<<endl;
//     cin>>n;
//     cout<<"The table is ==>"<<endl;
//     for (int i = 1; i <= 10; i++)
//     {
//         table = n*i;
//         cout<<n<<"*"<<i<<"="<<table<<endl;
//     }
    
//     return 0;
// }

// sum of first n numbers 

// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     int sum = 0;
//     cout<<"Enter the number to which you want sum:"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         sum = sum +i;
//     }
//     cout<<"The sum is "<<sum<<endl;
//     return 0;
// }

// pattern of numbers 
#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}