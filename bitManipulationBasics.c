#include <stdio.h>
#include <stdlib.h>
int
main (int argc, char *argv[])
{
	int h=1;
	h=h<<2;
	int a=5;
	printf("%d\n",h);
	int temp=1;
	temp= temp<<2;
	printf("%d\n", temp|a);
	return 0;
}

