#include <stdio.h>
#include <stdlib.h>

int fibonacciSumIterative ( int n ) {
	int t0=0, t1=1, fibonacciSum;
	if (n<=1) {
	return n;
	}
	for (int i=2; i<=n ; i++ ) {
		fibonacciSum = t0 + t1 ;
		t0 = t1 ;
		t1 = fibonacciSum;
	}
	
	return fibonacciSum;

}

int
main (int argc, char *argv[])
{
	int n;
	printf("Input the value of n \n");
	scanf("%d", &n);
	printf("The sum of numbers in Fibonacci Series upto the %dth element is : %d\n", n, fibonacciSumIterative(n));
	return 0;
}


