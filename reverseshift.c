#include <stdio.h>
#include <stdlib.h>
int main()
{
int n;
printf("Enter the value of n\n");
scanf("%d",&n);
int *arr= (int *)malloc(n*sizeof(int));
for (int i=0; i<n; i++)
{
scanf("%d", &arr[i]);
}
int shift;
printf("Enter the amount of left shifting that you want to do\n");
scanf("%d",&shift);
for (int i=0; i<n; i++)
{
if (i-shift<0)
	arr[i]=0;
else 
	arr[i-shift]= arr[i];
}
printf("%d\n",arr[n-1]); 
int x=1;
int i=n-1;
while (x<=shift)
{
arr[i]=0;
x++;
i--;
}
for (int i=0; i<n; i++)
{
printf("%d",arr[i]);
}}


