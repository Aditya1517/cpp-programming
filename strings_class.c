#include<stdio.h>
#include<string.h>

// gets and puts functions are used to in strings for input and output 

int main(int argc, char const *argv[])
{
    char s1[]="harry ";
    char s2[]="adi";
    char s3[55];
    // puts(strcat(s1,s2));
    printf("The lenght of s1 is %d \n",strlen(s1));

    // printf("The reversed string of s1 is:");
    // puts(strrev(s1));

    strcpy(s3,strcat(s1,s2));
    puts(s3);
    return 0;
}
