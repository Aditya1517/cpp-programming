#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i;
    int A[5] = {1,2,3,4,5};
    int B[5] = {1,2};
    int C[] = {1,2,3,4};
    for(i=0;i<5;i++){
        cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<endl;

    // for each loop for arrays
    
    for (int x:A){
        cout<<x<<endl;
    }

    }
    return 0;
} 

// array can be any type like int float and char
// for each loop for arrays
