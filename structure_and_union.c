// structures 

// #include<stdio.h>

// struct employee{
//     int id;
//     float marks;
//     char fav_char;
// };

// int main(){
//     struct employee e1;
//     e1.id=12;
//     e1.marks=23.32;
//     printf("%d %f \n",e1.id,e1.marks);
//     printf("Enter your fav char: \n");
//     scanf("%hhd",&e1.fav_char);
//     return 0;
// }


// unions

#include <stdio.h>
#include <string.h>

union Book {
   int pages;
   float price;
   char title[20];
};

int main( ) {
   union Book b1;       
   b1.pages = 100;
   printf( "Pages: %d\n", b1.pages);
   b1.price = 250.5;
   printf( "Price : %.1f\n", b1.price);
   strcpy( b1.title, "C Programming");
   printf( "Title : %s\n", b1.title);

   return 0;
}