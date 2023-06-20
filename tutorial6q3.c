#include <stdio.h>
int main()
{
    int i,c,n,b, sum=0;
    scanf("%d",&n);
    c=n;
    while (n !=0)
    {
        b = (n%10);
        n=n/10;
        sum +=(b*b*b);
        
    }
    if(sum =c)
         printf("This number is armstrong\n");
        else 
           printf("This number is not armstrong\n");  
}