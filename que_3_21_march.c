#include <stdio.h>
int main( )
{
auto int j = 1;
{
auto int j= 2;
{
auto int j = 3;
printf ( " %d ", j);
}
printf ( "\t %d ",j);
}
printf( "%d\n", j);
}

Externl Storage Class in C
First File: main.c
#include <stdio.h>
extern i;
main() {
printf("value of the external integer is = %d\n", i);
return 0;}
Second File: original.c
#include <stdio.h>
i=48;
Result:
value of the external integer is = 48
Static Storage Class in C
CODE:
#include <stdio.h>
void next(void);
static int counter = 7; //global variable //
main() {
while(counter<10) {
next();
counter++; }
return 0;}
void next( void ) {
static int iteration = 13; // local static variable //
iteration ++;
printf("iteration=%d and counter= %d\n", iteration, counter);
}

Register Storage Class in C
CODE:
#include <stdio.h> //function declaration //
main() {
register int weight;
int *ptr=&weight ;}