#include <stdio.h>

int main(){
int*p=NULL;//linenumber2
int test;
(void)scanf("%d",&test);
if(test>0)
	p=&test;
else if(p != NULL)
	*p=123;//linenumber8
return 1;
}