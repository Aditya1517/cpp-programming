#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[10000];
    int i;
    int words=1,characters=0,line=0;
    printf("Please enter the string \n");
    gets(str);
    for(i=0; str[i] != '\0'; i++){
            if(str[i]!=' '){ 
                characters++;
            }
            if(str[i]==' ' || str[i] != '\n' || str[i] != '\t'){
                words++;
            }
    }
    for(int j=0; str[j] != '\0'; j++){
        if(str[j]== '.'){
            line++;
        }
    }
    printf("\nTotal words: %d ",words-characters); 
    printf("\nTotal characters: %d",characters-line);
    printf("\nLine: %d ",line);
    getch();
    return 0;
}