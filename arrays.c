#include<stdio.h>


// int main()
// {
//     int A[5]={1,2,3,4,5};
//     printf("%d \n\n",A[1]);
//     for (int i=0;i<5;i++){
//         printf("%d \n",A[i]);
//     }
//     return 0;
// }

// addition of all elements in array

// int main()
// {
//     int B[5]={1,2,3,4,5};
//     int sum = 0;
//     for (int i=0;i<5;i++){
//         sum=sum+B[i]; 
//     }
//     printf("%d",sum);
//     return 0;
// }


// finding maximum of array 

// int main()
// {
//     int C[7]={2,5,4,7,3,9,6};
//     int max = C[0];
//     for(int i=0;i<8;i++){
//         if (C[i]>max){
//             max = C[i];
//         }
//     }
//     printf("The max is %d",max);
//     return 0;
// }


// liner search 

int main()
{
    int D[10],n=10;
    printf("Enter numbers:\n");
    for (int i=0;i<n;i++){
        scanf("%d",&D[i]);
    }
    int key;
    printf("Enter a number whoes index you want to find: \n");
    scanf("%d",&key);
    for (int i=0;i<n;i++){
        if (key==D[i]){
        printf("Index of the %d is %d",key,i);
        return 0;
        }
    }
    printf("The %d is not in array",key);
    return 0;
}
