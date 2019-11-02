#include <stdio.h>
#include <stdlib.h>
int
main (int argc, char *argv[])
{
	printf("Enter a string\n");
	char input_string[50];
	scanf("%s", input_string);
	int hashArray[26]= {-0};
	for (int i=0; input_string[i]!='\0'; i++) {
	 hashArray[input_string[i]-97]+=1;
	}
	
	
	for (int i=0; i<26; i++) {
	if (hashArray[i]>1) {
	printf("%c has %d duplicates", i+97, hashArray[i]);
	}
	} 
	return 0;
}


