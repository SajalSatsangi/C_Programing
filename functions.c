#include <stdio.h>
prime(int a)
{
    if (a == 1 || a == 2 || a == 3 || a == 5 || a == 7)
    {
        printf("the number is a prime no");
    }
    else
    {
        if (a % 2 == 0 || a % 3 == 0 || a % 4 == 0 || a % 5 == 0 || a % 6 == 0 || a % 7 == 0)
        {
            printf("the number is not a prime no");
        }
        else
        {
            printf("the number is a prime no");
        }
    }
    return a;
}

int main()
{
    int a, f;
    scanf("%d",&a);
    f = prime(a);
    printf("%d", f);
}