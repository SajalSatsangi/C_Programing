/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include <stdio.h>

int main()
{
    int a, b = 1, c;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", b);
            b++;
        }
        printf("\n");
    }
    
    return 0;
}