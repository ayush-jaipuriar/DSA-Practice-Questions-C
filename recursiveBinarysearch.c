#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compareTo(const void *first, const void *second)
{
int *a= (int *)first;
int *b= (int *)second;
if (*a>*b)
	return 1;
else if (*b>*a)
	return -1;
else
	return 0;
}

int recursiveBinSearch(int *arr, int low, int high, int key)
{
while (low<=high)
{
int mid = (low+high)/2;
if (arr[mid]==key)
	return mid;
else if (key<arr[mid])
	return recursiveBinSearch(arr, low, mid-1, key);
else 
	return recursiveBinSearch(arr,mid+1, high, key);
	}
return -1;
}

int main()
{
int n;
printf("Enter the number of elements that you want in your array\n");
scanf("%d", &n);
int *arr=(int *)malloc(n*sizeof(int));
printf("Enter the elements of your array\n");
for (int i=0; i<n; i++)
{
scanf("%d",&arr[i]);
}
qsort(arr,n,sizeof(int),compareTo);
printf("This is your Sorted Array :\n");
for (int i=0; i<n; i++)
{
printf("%d",arr[i]);
}
printf("\n");
int low=0;
int high=n;
printf("Enter the element that you want to search for in your array\n");
while (1)
{
int key;
scanf("%d",&key);
int index= recursiveBinSearch(arr, low, high, key);
if (index==-1)
	printf("Sorry, the element you searched is absent in the array\n");
else 
	printf("The element %d is present at index %d of the array\n",key,index);
	
int again;
printf("Enter 1 to search for another element and 0 to exit\n");
scanf("%d", &again);
if (again==0)
exit(0);
}}

