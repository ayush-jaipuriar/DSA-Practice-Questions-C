#include <stdio.h>
#include <stdlib.h>

int stringCompare ( const char *str1, const char *str2) {
	
	if (str1==NULL && str2==NULL) {
		return -1;
	}
	if (str1==NULL) {
		return -1;
	}
	if (str2==NULL) {
		return -1;
	}
	const char *ch1= str1;
	const char *ch2= str2;
	while (*ch1!='\0' && *ch2!='\0') {
		if (*ch1!=*ch2) {
			return *ch1 - *ch2;
		}
		ch1++;
		ch2++;
	}
	
	if (*ch1=='\0' && *ch2!='\0') {
		return 0 - *ch1;
	}
	
	if (*ch2=='\0' && *ch1!='\0') {
		return 0 - *ch2;
	}
	
	return 0;
}
int
main (int argc, char *argv[])
{
	printf("Enter the 1st string\n");
	char string1[20];
	scanf("%s", string1);
	printf("Enter the 2nd string\n");
	char string2[20];
	scanf("%s", string2);
	int comparisionResult = stringCompare(string1, string2);
	if (comparisionResult==-1) {
		printf("Either one of those strings are NULL\n");
	}
	else {	if (comparisionResult>0)
		printf("The 1st String is lexicographically greater than the 2nd String. The comparision result is :%d\n", comparisionResult);
		else if (comparisionResult<0) 
			printf("The 2st String is lexicographically greater than the 1st String. The comparision result is : %d\n", comparisionResult);
	}
	return 0;
}


