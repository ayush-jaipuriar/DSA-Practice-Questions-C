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
int main()
{
int n;
printf("Enter the number of elements : \n");
scanf("%d", &n);
int *arr= (int *)malloc(n*sizeof(int));
printf("Input the elements of array : \n");
for (int i=0; i<n; i++)
{
scanf("%d",&arr[i]);
}
printf("\n");
//qsort(arr, n, sizeof(int), compareTo);
for (int i=0; i<n; i++)
{
printf("%d", arr[i]);
}
printf("\n");
printf("Input the element to insert into sorted array : \n");
int number;
scanf("%d", &number);
int x=n-1;
while (arr[x]>number)
{
arr[x+1]=arr[x];
x--;
}
arr[x+1]= number;
for (int i=0; i<n; i++)
{
printf("%d", arr[i]);
}}


