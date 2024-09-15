#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    int c=a,d=b,rem;
   
    if(a>b){
        while(a%b!=0){
            rem=a%b;
            a=b;
            b=rem;
        }
        int lcm=(c*d)/b;
        printf("The hcf is %d and lcm is %d : \n",b,lcm);

    }
    else{
        while(b%a!=0){
            rem=b%a;
            b=a;
            a=rem;
        }
        int lcm=(c*d)/a;
        printf("The hcf is %d and lcm is %d : \n",a,lcm);

    }
    return 0;

}
