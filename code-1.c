#include <stdio.h>

/*@null@*/ /*@out@*/ static char* foo() {
    char *p = (char*) malloc(12*sizeof(char));
    return p;
}

int main () {
    char *p;
    int x;
    char s;
    // char* foo();
    printf("Please enter the value of x\n");
    (void)scanf ("%d", &x);
    if (x==0)
        p = 0 ;
    else
        p = foo();

    if(x !=0 && p!= 0) {
        s=*p;
        free(p);
    }

    else
    printf("The value of x entered is %d\n",x) ;
    return 0;

    }