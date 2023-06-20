#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a>b)
    {
        if (a>c)
        {
            printf("a is greatest");
        }
        else{
            printf("c is gretest");
        }
    }
   else
   {
    if (b>c)
    {
        printf("b is greatest");
    }
    else{
        printf("c is greatest");
    }
   }
    
}