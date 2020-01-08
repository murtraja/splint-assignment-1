#include <stdio.h>

/*@null@*/ static char* foo() {
    char *p = (char*) malloc(12*sizeof(char));
    if(p != NULL) {
    	*p = 'M';
    	return p;
    }
    return NULL;
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

    if(x !=0 && p!= NULL) {
        s=*p;
        free(p);
    }

    else
    printf("The value of x entered is %d\n",x) ;
    return 0;

    }