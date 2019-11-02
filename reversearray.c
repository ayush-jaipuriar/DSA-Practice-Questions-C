#include <stdio.h>
#include <stdlib.h>
int main()
{
int n;
printf("Enter the size of the array\n");
scanf("%d", &n);
int size= sizeof(int);
printf("%d\n",size);
int *arr= (int *)malloc(n*sizeof(int));
for (int i=0; i<n ; i++)
{
scanf("%d",&arr[i]);
}
printf("\n");
for (int i=0,j=n-1;i<j;i++, j--)
{
int temp=arr[i];
arr[i]= arr[j];
arr[j]= temp;
}
for (int i=0; i<n; i++)
{
printf("%d",arr[i]);
}}

