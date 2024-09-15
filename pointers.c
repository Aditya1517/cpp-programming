#include<stdio.h>
int main()
{
    int x=10;
    int *p; // initialization
    p=&x; // declaration
    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",p);
    printf("%d\n",&p);
    printf("%d\n",*p); // derefrencing
    return 0;
}
