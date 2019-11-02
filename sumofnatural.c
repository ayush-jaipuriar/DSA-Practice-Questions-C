#include <stdio.h>
int sum(int n)
{
if (n==0)
return 0;
else
return sum(n-1)+n;
}
int directsum(int n)
{
return n * (n+1)/2;
}

int main()
{
printf("%d \n", sum(5));
printf("%d ",directsum(5));
}
