#include <stdio.h>
int main()
{
    int e, s;
    //e is a experience level
    //s is a salary
    printf("enter the experience's year\n");
    scanf("%d", &e);
    printf("experience=%d",e);

    if (e>10 && e<=15)
    {
        printf("enter your salary\n");
        scanf("%d", &s);

        if (s<5000000)
        {
            printf("your increament is 15%");
        }
        if (s>=500000 && s<750000)
        {
            printf("your increament is 12%");   
        } 
        else{
            printf("your increament is 0%");
        }   
    }
    if (e>15 && e<=20)
    {
        printf("enter your salary\n");
        scanf("%d", &s);
        
        if (s<500000)
        {
            printf("your increament is 18%");   
        }
        else if (s>=750000)
        {
            printf("your increament is 10%");   
        }
        else {
            printf("your increament is 0%");   
        }
        
    }
    else if (e>=20)
    {
        printf("enter your salary\n");
        scanf("%d", &s);

        if (s>=500000 && s<750000)
        {
            printf("your increament is 16%");     
        }
        else if (s>=750000)
        {
            printf("your increament is 13%");       
        }
        else if (s<500000)
        {
            printf("your increament is 20%");    
        }
        else{
            printf("your increament is 0%");     
        }       
    }
    else
    {
        printf("enter your salary\n");
        scanf("%d", &s);

        if (s>=500000 && s<750000)
        {
            printf("your increament is 17%");     
        }
        else if (s>=750000)
        {
            printf("your increament is 15%"); 
        }
        else{
            printf("your increament is 0%");     
        } 
    }
    
    return 0;
}