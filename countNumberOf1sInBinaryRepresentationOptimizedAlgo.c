#include <stdio.h>
#include <stdlib.h>

int countNumberOf1sInBitwiseBinary(int number) {
	int count = 0;
	while (number !=0) {
		number = number & (number-1);
		count++;
	
	}
	return count;

}

int
main (int argc, char *argv[])
{
	int number;
	printf("Enter the number whose number of 1s that you want to count in its binary representation\n");
	scanf("%d", &number);
	int numberOfOnes = countNumberOf1sInBitwiseBinary ( number );
	printf("The number of 1s present are : %d\n", numberOfOnes);
	return 0;
}


