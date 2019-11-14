#include <stdio.h>
#include <stdlib.h>

int checkNthBit ( int *number, int *position ) {
	int check_bit = 1 << *position;
	int and_bit  = *number & check_bit;
	return (and_bit==check_bit )? 1 : 0;
} 

int
main (int argc, char *argv[])
{
	int n;
	printf("Enter the number \n");
	scanf("%d", &n);
	printf("Enter the bit position to check if its 1 or 0\n");
	int position;
	scanf("%d", &position);
	int nthBitIs = checkNthBit(&n, &position);
	(nthBitIs==1)? printf("Yes, the %d bit in %d is 1\n", position, n) : printf("No, the %d bit in %d is 0\n", position, n);
	return 0;
}


