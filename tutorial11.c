#include <stdio.h>
int main()
{
    int p;
    printf("prize distribution \n");
    printf("enter 1 if you have passed both maths and science\n");
    printf("enter 2 if you have passed maths\n");
    printf("enter 3 if you have passed science\n");

    scanf("%d", &p);
    switch (p)
    {
        case 1:
            printf("you won 45 rs");

        break;

        case 2:
            printf("you won 15 rs");
        break;

        case 3:
         printf("you won 15");
        break;
    default:
    printf("you won nothing");
        break;
    }
    return 0;
}  