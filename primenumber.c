#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int
main (int argc, char *argv[])
{
	int n;
	printf("Input the value of n\n");
	scanf("%d", &n);
	int count=0;
	for (int i=1; i*i<=n;i++)
	{
		if (n%i==0)
			if (i*i==N)
			count++;
		else
			count+=2;
	
	}
	
	return 0;
}



