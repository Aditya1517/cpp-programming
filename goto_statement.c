#include<stdio.h>

int main(int argc, char const *argv[])
{
    // lable:
    //     printf("We are in lable");
    //     goto end;
    // printf("Hello World");
    // goto lable;
    // end:
    //     printf("We are at the end");
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d",i);
        for (int j = 0; i < 8; i++)
        {
        printf("Enter the number \n OR \n Enter 0 to exit ");
        scanf("%d",num);
        if (num == 0){
            goto end;
        }
        }
        
    }
    end:
        
    
    return 0;
}
