#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gcd(int a, int b)
{
if (b==0)
	return a;
else
 	return gcd(b, a%b);
}
int
main (int argc, char *argv[])
{	clock_t t;
	
	int a,b;
	printf("Input 2 numbers\n");
	srand(time(0));
	t=clock();
	for (int i=0;i<100;i++)
{	a=rand();
	b=rand();
	printf("The GCD of the two numbers using Euclid's Algorithm is %d\n", gcd(a,b));
}
	t=clock()- t;
	double time_taken=((double)t)/CLOCKS_PER_SEC;
	printf("Time taken to find the GCD using Euclid's Algorithm is : %f'\n", time_taken);
	return 0;
}


