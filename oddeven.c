#include <stdio.h>
int main()
{
    int a, num;
    printf("enter the number=");
    scanf("%d", &a);
    num = a % 2;
    if (num == 0)
    {
        printf("%d is even", a);
    }
    else
    {
        printf("%d is odd", a);
    }
}