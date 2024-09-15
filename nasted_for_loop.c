#include<stdio.h>

// int main()
// {
//     for(int i=0;i<=5;i++){
//         for(int j=0;j<=5;j++){
//             printf("(%d,%d)",i,j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// int main()
// {
//     int count=1;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             printf("%d ",count);
//             count++;
//         }
//         printf("\n");
//     }
//     return 0;
// }


// int main()
// {
//     int i,j,n;
//     printf("Enter a number to which you want to pirnt pattern:\n");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             if(i>=j){
//                 printf("*");
//             }
//         }
//     printf("\n");
//     }
//     return 0;
// }



// int main()
// {
//     int i,j,n;
//     printf("Enter a number to which you want to pirnt pattern:\n");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             if(i>=j){
//                 printf(" ");
//             }
//             else{
//                 printf("*");
//             }
//         }
//     printf("\n");
//     }
//     return 0;
// }

int main()
{
    int i,j,n;
    printf("Enter a number a size of square's side:\n");
    scanf("%d",&n);
    for (i=0;i<=n;i++){
        for (j=0;j<=n;j++){
            printf("* ");
        }
    printf("\n");
    }
    return 0;
}