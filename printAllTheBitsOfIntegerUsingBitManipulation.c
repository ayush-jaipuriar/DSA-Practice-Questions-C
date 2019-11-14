#include <stdio.h>
#include <stdlib.h>

void printTheBits(int *number ) {
	unsigned int check_bit = 1<<(sizeof(int)*8-1);
	while (check_bit!=0) {
		int result = check_bit & *number ;
		if (result == check_bit) {
			printf("1 ");
		}
		else {
			printf("0 ");
		}
		check_bit = check_bit>>1;
	}
	printf("\n");
}

int
main (int argc, char *argv[])
{
	int number;
	printf("Enter the number whose bits you want to print\n");
	scanf("%d", &number);
	printTheBits(&number);
	return 0;
}


