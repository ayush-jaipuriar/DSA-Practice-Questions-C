#include <stdio.h>
#include <stdlib.h>

int fibonacciSumRecursiveMemoization( int n, int *arr ) {
	
	if (n<=1) {
		arr[n] = n;
		return n;
	}
	else {
		if (arr[n-2]==-1) 
			arr[n-2]= fibonacciSumRecursiveMemoization(n-2, arr);
		if (arr[n-1]==-1)
			arr[n-1]= fibonacciSumRecursiveMemoization(n-1, arr);
		
		return arr[n-2] + arr[n-1];
	}
	
	
}

 int
 main (int argc, char *argv[])
 {
  	int n;
 	printf("Input the value of n \n");
 	scanf("%d", &n);
 	int *arr = ( int *) malloc (sizeof(int ));
	for ( int i= 0; i<n; i++ ) {
	arr[i]= -1;
	}
 	printf("The Recursive Sum of Fibonacci Series using Recursion optimised through usage of Memoization is %d : %d\n", n, fibonacciSumRecursiveMemoization(n, arr));
 
 	return 0;
 }


