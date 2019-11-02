#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//int BinarySearch(int *arr, int low, int high, int key)
//{
//
//}
int compareTo(const void *first, const void *second)
{
int *a = (int *)first;
int *b = (int *)second;
if (*a > *b)
	return 1;
else if (*b>*a)
	return -1;
else
	return 0;
	}
int binSearch(int *arr, int low, int high, int key)
{
while (low<=high)
{
int mid = (low+high)/2;
if (arr[mid]==key)
{
return mid;
}
else if (arr[mid]>key)
{
high = mid -1;
}
else
{
low = mid+1;
}}
return -1;
}

	
int main()
{
printf("Enter the number of elements that you want in the sorted array\n");
int n;
scanf("%d", &n);
int *arr=(int *)malloc(n*sizeof(int));
for (int i=0; i<n; i++)
{
scanf("%d", &arr[i]);
}
qsort(arr, n, sizeof(int), compareTo);
for (int i=0; i<n; i++)
{
printf("%d",arr[i]);
}
printf("\n");
int low=0;
int high=n;
printf("Enter the array element that you want to search\n");
int key;
scanf("%d",&key);
int index =binSearch(arr,low, high, key);
if (index==-1)
{
printf("Sorry, searched element is not present in your array\n");
}
else 
{
printf("Searched element is present in your array in the index : %d", index);
}}



