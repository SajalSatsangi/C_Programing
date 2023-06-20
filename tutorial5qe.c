/*
S S S S S
S       S
S       S
S       S
S S S S S
*/

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 5)
        {
            printf("S S S S S");
        }
        else
        {
            printf("S       S");
        }
        printf("\n");
    }
    
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (i == 1 || i == a)
        {
            for (int k = 0; k < a; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= a; j++)
            {
                if (j == 1 || j == a)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}