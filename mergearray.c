#include <stdio.h>
#include <stdlib.h>
int main()
{
int n;
printf("Input the number of elements in the 1st array\n");
scanf("%d", &n);
printf("Input the number of elements in the 2nd array\n");
int m;
scanf("%d", &m);
printf("Input %d elements into the 1st array\n",n);
int *arr1= (int *)malloc(n*sizeof(int));
for (int i = 0; i < n; i += 1)
{
	scanf("%d", &arr1[i]);
}
int *arr2= (int *)malloc(m*sizeof(int));
printf("Input %d elements into 2nd array\n",m);
for (int i = 0; i < m; i += 1)
{
	scanf("%d", &arr2[i]);
}
int x=0;
int y=0;
int k=0;

int *arr3= (int *)malloc((n+m)*sizeof(int));
while (x<n && y<m)
{
if (arr1[x]<arr2[y])
	arr3[k++]=arr1[x++];
else
	arr3[k++]=arr2[y++];
}
for (;x<n;x++)
{
arr3[k++]=arr1[x];
}
for (;y<m;y++)
{
arr3[k++]=arr2[y];
}
printf("\n");
for (int i = 0;  i < (n+m);  i += 1)
{
	printf("%d\n", arr3[i]);
}


}


