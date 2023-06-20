#include <stdio.h>
int main()
{
    int n = 10, i, j, k;
    for (i = 1; i <= n; i++)
    {
        for (j = n - 1; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*", k);
        }
        printf("\n");
    }
}