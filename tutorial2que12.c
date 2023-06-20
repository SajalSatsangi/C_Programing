#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the year of experience=");
    scanf("%d",&a);

    if (a>10&&a<=15)
    {
        printf("enter the salary=");
        scanf("%d",&b);

        if (b<500000)
        {
            printf("your increament is=%d",(b*15)/100);
        }
        else if (b>=500000&&b<7500000)
        {
            printf("your increament is=%d",(b*12)/100);
        }
        else if (b>=7500000)
        {
            printf("your increament is=%d",(b*10)/100);
        }
     }
    else if (a>15&&a<=20)
    {
        printf("enter the salary=");
        scanf("%d",&b);

        if (b<500000)
        {
            printf("your increament is=%d",(b*18)/100);
        }
        else if (b>=500000&&b<7500000)
        {
            printf("your increament is=%d",(b*16)/100);
        }
        else if (b>=7500000)
        {
            printf("your increament is=%d",(b*13)/100);
        }
    }
    else if (a>=20)
    {
        printf("enter the salary=");
        scanf("%d",&b);

        if (b<500000)
        {
            printf("your increament is=%d",(b*20)/100);
        }
        else if (b>=500000&&b<7500000)
        {
            printf("your increament is=%d",(b*17)/100);
        }
        else if (b>=7500000)
        {
            printf("your increament is=%d",(b*15)/100);
        }
    }
}