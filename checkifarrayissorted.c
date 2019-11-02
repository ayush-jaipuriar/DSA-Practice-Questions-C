#include <stdio.h>
#include <stdlib.h>
int compareTo(const void *first, const void *second)
{
int *a=(int *)first;
int *b=(int *)second;
if (*a>*b)
	return 1;
else if (*b>*a)
	return -1;
else 
	return 0;
}

void informExit()
{
printf("Array is already sorted!\n");
exit(0);
}

int isArraySorted(int *arr, int n)
{
for (int i=1; i<n; i++)
{
if (arr[i-1]>arr[i])
return 0;
}
return 1;
}
int main()
{
int n;
printf("Input the number of elements : \n");
scanf("%d", &n);
int *arr= (int *)malloc(n*sizeof(int));
for (int i=0; i<n; i++)
{
scanf("%d", &arr[i]);
}
printf("Printing the array : \n");
for (int i=0; i<n; i++)
{
printf("%d", arr[i]);
}
printf("\n");
int check=isArraySorted(arr,n);
check==1? informExit() : printf("Array isnt sorted yet\n");
printf("Sorting the Array \n");
qsort(arr,n, sizeof(int), compareTo);
for (int i=0; i<n; i++)
{
printf("%d", arr[i]);
}}

