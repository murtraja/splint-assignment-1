#include<stdlib.h>
#include <string.h>
#include <stdio.h>
struct check{
	char*sname;
	size_t ncount;
};
static int f1(struct check /*@out@*/*testc){
	char*b=(char*)malloc(sizeof(char));
	if(b==NULL)
		return 0;
	printf("InputString:");
	(void)scanf("%s",b);
	if(testc->sname != NULL) {
		free(testc->sname);
	}
	testc->sname=b;
	testc->ncount=strlen(testc->sname);
	return 1;
}
static /*@null@*/char* f2(){
	char*str=(char*)malloc(sizeof(char));
	if(str!=NULL)
		strcpy(str,"TESTING");
	return str;
}
int main(){
	struct check *c= (struct check*)malloc(sizeof(struct check));
	if(c==NULL)
		exit(0);
	if(f1(c)==0){
		if(c->sname!=NULL)
			free(c->sname);
		c->sname=f2();
		if(c->sname!=NULL)
			c->ncount=strlen(c->sname);
	}
	if(c!=NULL) {
		free(c);
	}
	return(1);
}