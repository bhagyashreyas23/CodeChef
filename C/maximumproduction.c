#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,d,e;
	scanf("%d",&a);
	while(a--) {
	    scanf("%d %d %d %d",&b,&c,&d,&e);
	    int n=c*7;
	    int m=d*b+(7-b)*e;
	    if(n>=m) 
	      printf("%d\n",n);
	    else 
	      printf("%d\n",m);
	}
	return 0;
}
