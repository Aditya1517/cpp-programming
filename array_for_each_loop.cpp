#include<iostream>
using namespace std;

// every element of array occupies 4 bytes of memory

// int main()
// {
//     int A[6]={1,2,3,4,5,6};
//     for(auto x:A){
//         cout<<x<<endl;
//     }
//     return 0;
// }


// addition of all elements in array

// int main(int argc, char const *argv[])
// {
//     int B[6]={1,2,3,4,5,6};
//     int sum = 0;
//     for (auto x:B){
//         sum = sum + x;
//     }
//     cout<<sum;
//     return 0;
// }


// finding maximum of array 

// int main()
// {
//     int C[7]={2,5,4,7,3,9,6};
//     int max=C[0];
//     for (int i=0;i<8;i++){
//         if (C[i]>max){
//             max = C[i];
//         }
//     }
//     cout<<"The max is "<<max;
//     return 0;
// }


// liner search 

// int main()
// {
//     int D[10],n=10;
//     cout<<"Enter numbers: ";
//     for (int i=0;i<n;i++){
//         cin>>D[i];
//     }
//     int key;
//     cout<<"Enter a key whoes index you want to find:"<<endl;
//     cin>>key;
//     for (int i=0;i<n;i++){
//         if (key==D[i]){
//             cout<<"The index of "<<key<<" is "<<i;
//             return 0;
//         }
//     }
//     cout<<"Number is not in array";
//     return 0;
// }


// write a programme to count number of +ve and -ve numbers in array

int main()
{
    int A[]={3,5,-2,9,-4,10,-24,19,81,-7,12,13};
    int pcount=0;
    int ncount=0;
    for (auto x:A){
        if (x<0){
            ncount++;
        }
        else{
            pcount++;
        }
        cout<<ncount<<endl<<pcount;
    }
    return 0;
}
