#include<stdio.h>
#include<conio.h>
int fibonacci(int);
int main(){ 
	int n, i; 
	printf("No of elements in a series :\n"); 
	scanf("%d",&n); 
	printf("fibonacci series is : \n");
	for(i=0;i<n;i++) { 
		printf("%d ",fibonacci(i));
	}
	getch();
}
 
int fibonacci(int i){ 
	if(i==0) return 0; 
	else if(i==1) return 1; 
	else return (fibonacci(i-1)+fibonacci(i-2));
}

// #include<stdio.h>

// int main(){
//     int n,r,temp,sum=0;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     temp=n;
//     while(n>0){
//     r=n%10;
//     sum=(sum*10)+r;
//     }
//     if (temp==n){
//         printf("number is palindrom");
//     }
//     else{
//         printf("number is not palindrom");
//     }
//     // printf("the number is %d",a);
// }