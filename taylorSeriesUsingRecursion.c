#include <stdio.h>
#include <stdlib.h>
 
double taylorSeries(int x, int n) {

static double p=1;
static double f=1;
double r;
if (n==0) {
	return 1;}
else {
	r= taylorSeries(x, n-1);
	p= p*x;
	f= f*n;
	return r+ p/f;
}
}

int
main (int argc, char *argv[])
{	int n;
	printf("Input the value of n\n");
	scanf("%d", &n);
	printf("The value after evaulating Taylor Series with n = %d  is %lf\n", n, taylorSeries(1,n));	
		
	return 0;
}


