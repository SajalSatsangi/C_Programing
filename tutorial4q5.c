#include <stdio.h>
int main()
{
    int i, a=1, b=1, n, c;
    scanf("%d",&n);
        printf("%d",a);
        printf(" %d",b);
    for ( i = 0; i <=n-3 ; i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
    
}