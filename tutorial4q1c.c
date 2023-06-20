#include <stdio.h>
#include <math.h>
int main()
{
   int n, i, x, b;
   float a, sum;
   scanf("%d %d", &x, &n );
   for ( i = 1; i <= n-1; i++)
   {
       b=pow(x,i);
       a=(float)b/i;
       sum=sum+a;
   }
       printf("sum= %f",1+sum);
    return 0;
}