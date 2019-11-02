#include <stdio.h>
#include <stdlib.h>

// There seems to be a bug in the program and right now I am not going to fix this , if  you see this in the future please be kind enough to fix this bug, and if possible revise Taylor Series using Horner's Rule because you have not understood it well enough. Thats for sure.


double taylorSeriesUsingHornersRuleIterative ( double x , double n ) {

	double s = 1;
	for ( ; n>0 ; n-- ) {
		s= s * (1 + x/n *s );
	}

	return s;
}

int
main (int argc, char *argv[])
{
	int n;
	printf("Input the value of n \n");
	scanf("%d", &n);
	printf("Taylor Series evaluated using Horner's Rule through iteration is : %lf \n", taylorSeriesUsingHornersRuleIterative( 2.0, (double)n));
	return 0;
}


