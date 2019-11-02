#include <stdio.h>
int oldpow(int m, int n)
{
if (n==0)
return 1;
else
return oldpow(m,n-1) * m;
}
int pow(int m, int n)
{
if (n==0)
return 1;
else if ( n%2==0)
return pow(m*m, n/2);
else
return m*pow(m*m, (n-1)/2);
}
int main()
{
printf("%d \n", oldpow(2,9));
printf("%d \n", pow(2,9));
}
