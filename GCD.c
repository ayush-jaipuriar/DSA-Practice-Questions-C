#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int gcd(int a, int b)
{
int m= (a<b)? a:b;
int gcd;
for (int i=m;i>0;--i)
{	
	if (a%i==0 && b%i==0)
	{
	gcd=i;
	
	return gcd;
	}	
}
}

int
main (int argc, char *argv[])
{	clock_t t;
	int n;
	int a,b;
	srand(time(0));
	t= clock();
	for (int i=0;i<100;i++)
	{a= rand(); b=rand();
	printf("GCD = %d\n", gcd(a,b));
	}
	t= clock() - t;
	double time_taken= ((double)t)/CLOCKS_PER_SEC;
	printf("The time taken is %f\n", time_taken);
	
	return 0;
}


