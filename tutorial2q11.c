#include <stdio.h>
int main()
{
    float a;
    printf("enter the units of electricity bill=[");
    scanf(" %f",&a);

    if (a<=100)
    {
        printf("rate 2/-per unit");
        printf("total bill= %f",a*2);
    }
    else if(a>100&&a<=300)
    {
        printf("rate 3.50/-per unit");
        printf("total bill= %f",a*3.50);
    }
    else if(a>300&&a<=500)
    {
        printf("rate 5/-per unit");
        printf("total bill= %f",a*5);
    }
    else if(a>500&&a<=800)
    {
        printf("rate 7/-per unit");
        printf("total bill= %f",a*7);
    }
    else if(a>800)
    {
        printf("rate 8/-per unit");
        printf("total bill= %f",a*8);
    }
}