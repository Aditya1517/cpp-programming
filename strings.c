// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     // char a[10]="hello";
//     // printf("%s\n",a);
//     // char b[]={'h','e','l','l','o','\0','f','f'};
//     // printf("%s\n",b);
//     // char c[]={65,66,67,68,0,69,70};
//     // printf("%s\n",c);

//     char str[43];
//     printf("Enter a string: \n");
//     gets(str);
//     // printf("Using custom function printStr: \n");
//     // printStr(str);
//     printf("Using printf %s \n",str);
//     printf("using gets: \n");
//     puts(str);

//     return 0;
// }

#include <stdio.h>

int main()
{
    char s1[40];
    char s2[40];
    printf("Enter a name: \n");
    gets(s1);
    printf("Enter another name: \n");
    gets(s2);
    printf("%s is a friend of %s",s1,s2);

    return 0;
}