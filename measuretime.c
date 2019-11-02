#include <stdio.h>
#include <time.h>

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
double time;
clock_t t;	//initialized the structure of time function in time.h
t=clock();	//taking the initial time
printf("%d \n", oldpow(2,16));	//running the function
t=clock()-t;		//taking the time difference between the original and now after function execution
time = ((double)t)/CLOCKS_PER_SEC; // time it took to execute the function in seconds, CLOCKS_PER_SEC means CPU cycles per s
printf("It took %f seconds to execute the orignal recursive power function \n", time);
t= clock();
printf("%d \n", pow(2,16));
t= clock() - t;
time = (double)t/ CLOCKS_PER_SEC;
printf("It took %f seconds to execute the advanced recursive power function\n", time);
}

