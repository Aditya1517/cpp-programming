#include<iostream>
using namespace std;


// printing the square 

// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the side of square:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"*";
//         }
//     cout<<endl;
//     }
//     return 0;
// }


// printing upper left triangle

// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter number:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if (j>i){
//                 cout<<"";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//     cout<<endl;
//     }
//     return 0;
// }


// printing lower left triangle

// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter number:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if (j>=i){
//                 cout<<"*";
//             }
//             else{
//                 cout<<"";
//             }
//         }
//     cout<<endl;
//     }
//     return 0;
// }


// printing upper right triangle 

// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter number:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if (i+j>=n-1){   // this step is imp (logic)
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//     cout<<endl;
//     }
//     return 0;
// }


// printing lower right triangle

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    for (int i=0;i<n;i++){        // kyu nahi ho raha he bc yee 
        for (int j=0;j<n;j++){
            if (i+j>n-1){
                cout<<"";
            }
            else{
                cout<<"*";
            }
        }
    cout<<endl;
    }
    return 0;
}
