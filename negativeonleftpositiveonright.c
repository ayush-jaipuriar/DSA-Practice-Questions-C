#include <stdio.h>
#include <stdlib.h>
void 
swap(int *a, int *b)
{
int temp;
temp= *a;
*a= *b;
*b= temp;
}
int 
negativepositive(int *arr, int n)
{
	int i=0;
	int j=n-1;
	while (i<j)
	{
		while (arr[i]<0)	{i++;}
		while (arr[j]>=0)	{j--;}
		if (i<j)
			swap(&arr[i], &arr[j]);
	}
}
int
main (int argc, char *argv[])
{
	int n;
	printf("Input the size of array\n");
	scanf("%d", &n);
	int *arr=(int *)malloc(n*sizeof(int));
	for (int i=0;i<n;i++)
	{	
		scanf("%d",&arr[i]);
	}
	negativepositive(arr,n);
	for (int i=0; i<n ; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}

