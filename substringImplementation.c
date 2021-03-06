#include <stdio.h>
#include <stdlib.h>

int subStringCheck(const char *haystack, const char *needle) {
	if (*haystack==0 || *needle==0) {
		printf("Error: Both the strings are empty.\n");
		return 0;
	}
	
	while (*haystack!='\0') {
	 	if (*haystack==*needle) {
	 		const char *h = haystack;
	 		const char *n  = needle;
	 		while (*n!='\0' && *h==*n) {
	 			h++;
	 			n++;
	 		}
	 		if (*n=='\0') {
	 			
	 			return 1;
	 		}}
	 		haystack++;
	 	}
	 	return 0;
	
	}


int
main (int argc, char *argv[])
{
	printf("Enter the 1st string\n");
	char string1[20];
	scanf("%s", string1);
	printf("Enter the 2nd string \n");
	char string2[20];
	scanf("%s", string2);
	int substringPresent = subStringCheck(string1, string2);
	(substringPresent==1)? printf("Yes, The 2nd String is a substring of the 1st String\n"): printf("No, The 2nd String is not a subsring of the 1st string\n");
	return 0;
}
