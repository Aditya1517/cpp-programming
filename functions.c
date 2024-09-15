#include<stdio.h>

// with argument and with return value
// int sum(int a,int b){
//     return a+b;
// }

// with argument and without return value
// void printstar(int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c",'*');         
//     }
    
// }

// with argument and with return value
int takenumber(){
    int i;
    printf("Enter a number:\n");
    scanf("%d",&i);
    return i;
}

int main(int argc, char const *argv[])
{
    // int a,b,c;
    // printf("Enter value of a: \n");
    // scanf("%d",&a);
    // printf("Enter value of b: \n");
    // scanf("%d",&b);
    // c = sum(a,b);
    // printf("The sum of a & b is %d",c);
    // printstar(7);
    int e;
    e=takenumber();
    printf("The number entered is %d \n",e);
    return 0;
}
