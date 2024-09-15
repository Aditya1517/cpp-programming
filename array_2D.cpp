#include<iostream>
using namespace std;
// int main()
// {
//     int i,j;
//     int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int B[3][3] = {1,2,3,4,5,6,7,8,9};
//     int C[3][3] = {2,3};

//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++){
//             cout<<A[i][j]<<" ";
//         }
//     cout<<endl;
//     }
//     return 0;
// }


// int main()
// {
//     int i,j;
//     int A[3][3];
//     cout<<"Enter a numbers in array:"<<endl;
//     for(auto& x:A){
//         for (auto& y:x){
//             cin>>y;
//         }
//     }

//     for(auto& x:A){
//         for(auto& y:x){
//             cout<<y<<" ";
//         }
//     cout<<endl;
//     }
//     return 0;
// }


// addition of two matrix

// int main()
// {
//     int A[2][3]={3,3,3,3,3,3};
//     int B[2][3]={1,1,1,1,1,1};
//     int c[2][3];
//     for (int i=0;i<2;i++){
//         for (int j=0;j<3;j++){
//             c[i][j]=A[i][j]+B[i][j];
//         }
//     }
//     for (int i=0;i<2;i++){
//         for (int j=0;j<3;j++){
//             cout<<c[i][j]<<" ";
//         }
//     cout<<endl;
//     }
//     return 0;
// }


// programme for average of all elements in array

// int main()
// {
//     int i,n;
//     float sum=0.0,avg;
//     int A[1000];
//     cout<<"Enter the number of elements:"<<endl;
//     cin>>n;
//     for (i=0;i<n;i++){
//         cout<<i+1<<". Enter the number:"<<endl;
//         cin>>A[i];
//     }
//     for (i=1;i<n;i++){
//         cout<<A[i]<<" ";
//         sum = sum +A[i];
//     }   
//     avg = sum / n;
//     cout<<"The average of all elements in array is "<<avg<<endl;
//     return 0;
// }


// programme for multiplication of two arrays 

#include <iostream>
using namespace std;
int main()
{
 int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
 
 cout << "Enter rows and columns for first matrix: ";
 cin >> r1 >> c1;
 cout << "Enter rows and columns for second matrix: ";
 cin >> r2 >> c2;
 
 if (c1!=r2)
 {
 cout<<"Cant be Multiplied"; 
 return 0; 
}
 
 // Storing elements of first matrix.
 cout << endl << "Enter elements of matrix 1:" << endl;
 for(i = 0; i < r1; ++i)
 for(j = 0; j < c1; ++j)
 {
 cout << "Enter element a" << i + 1 << j + 1 << " : ";
 cin >> a[i][j];
 }
 
 // Storing elements of second matrix.
 cout << endl << "Enter elements of matrix 2:" << endl;
 for(i = 0; i < r2; ++i)
 for(j = 0; j < c2; ++j)
 {
 cout << "Enter element b" << i + 1 << j + 1 << " : ";
 cin >> b[i][j];
 }
 
 
 // Multiplying matrix a and b and storing in array mult.
 for(i = 0; i < r1; ++i)
 for(j = 0; j < c2; ++j) 
 { 
 mult[i][j]=0;
 for(k = 0; k < c1; ++k)
 {
 mult[i][j] += a[i][k] * b[k][j];
 } 
 }
 
 // Displaying the multiplication of two matrix.
 cout << endl << "Output Matrix: " << endl;
 for(i = 0; i < r1; ++i)
 for(j = 0; j < c2; ++j)
 {
 cout << " " << mult[i][j];
 if(j == c2-1)
 cout << endl;
 }
 
 return 0;
}