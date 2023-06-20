#include <stdio.h>
int main()
{
    int a;
    printf("enter");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("distinction");
        break;
    case 2:
        printf("first division");
        break;
    
    default:
        printf("fail");
        break;
    }
    return 0;
}