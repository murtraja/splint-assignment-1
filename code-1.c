#include <stdio.h>
int main () {
char *p;
int x;
char s;
char* foo();
printf("Please enter the value of x\n");
scanf ("%d", &x);
if ( x==0)
p = 0 ;

else
p = foo() ;
if(x !=0)
s=*p;

else
printf("The v al u e o f x e n t e r e d i s %d\n", x ) ;
return 0;

}