#include <stdio.h>
#include <stdlib.h>

int setNthBitTo1( int *number, int *position ) {
 	int set_bit= 1<< *position;
 	*number = *number | set_bit;
 	return *number;
}

int
main (int argc, char *argv[])
{
	int number;
	printf("Enter the number\n");
	scanf("%d", &number);
	int position;
	printf("Enter the position of the bit you want to set to 1\n");
	scanf("%d", &position);
	printf("The number before bit manipulation : %d\n", number);
	number = setNthBitTo1( &number, &position );
	printf("The number after bit manipulation : %d\n", number);
	return 0;
}


