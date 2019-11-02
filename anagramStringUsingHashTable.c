#include <stdio.h>
#include <stdlib.h>
int
main (int argc, char *argv[])
{
	char A[30];
	char B[30];
	printf("Input the 1st String\n");
	scanf("%s", A);
	printf("Input the 2nd String\n");
	scanf("%s", B);
	int hashTable[26] = {0};
	for (int i=0; A[i]!='\0'; i++) {
		hashTable[A[i]-97]+=1;
	}
	int i=0;
	for (i=0; B[i]!='\0'; i++) {
		hashTable[B[i]-97]-=1;
		if (hashTable[B[i]-97]<0) {
		printf("The two strings are not an Anagram\n");
		exit(0);
		} 
	}
	if (B[i]=='\0') {
	printf("The two strings %s and %s are an Anagram\n", A, B);
	}
	
	
 	return 0;
}


