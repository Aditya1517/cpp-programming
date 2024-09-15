#include <stdio.h>
int fact(int n)
{
    
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }
}

int main(int argc, char const *argv[])
{
    int c,num;
    printf("Enter a number: \n");
    scanf("%d",&num);
    c = fact(num);
    printf("The factorial of %d is %d \n",num,c);
    return 0;
}
