#include <stdio.h>
int main()
{
    int a;
    printf("enter the value of flag=");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        printf("TIOT");
        break;
    case 2:
        printf("LUKE WARM");
        break;
    case 3:
        printf("COLD");
        break;
    default:
        printf("OUT OF RANGE");
        break;
    }
}