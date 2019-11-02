#include <stdio.h>
#include <stdlib.h>

double taylorSeriesUsingHornersRule ( int x, int n ) {

	static double s;
	if (n==0) {
		return s;
	}
	s= 1 + x*s/n;
	return taylorSeriesUsingHornersRule(x,n-1);
}

int
main (int argc, char *argv[])
{
	int n;
	printf("Input the number of elements \n");
	scanf("%d", &n);
	printf("The Taylor Series evaulated using Horner's Rule for %d is : %lf\n", n, taylorSeriesUsingHornersRule(2,n));
	
	
	return 0;
}

