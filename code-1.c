#include <stdio.h>
int main () {
    char *p;
    int x;
    char s;
    char* foo();
    printf("Please enter the value of x\n");
    (void)scanf ("%d", &x);
    if (x==0)
        p = 0 ;
    else
        p = foo();

    if(x !=0)
        s=*p;

    else
    printf("The value of x entered is %d\n",x) ;
    return 0;

    }