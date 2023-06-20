#include <stdio.h>
int main()
{
    int i, flag = 0, a, j, num[] = {12, 13, 14, 7, 9, 5, 9, 10, 87, 99};
    printf("PRIME NUMBERS ARE = ");
    for (i = 0; i < 9; i++)
    {
        for (j = 2; j < num[i] / 2; j++)
        {
            a = num[i] % j;
            if (a == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("%d ", num[i]);
        }
        flag = 0;
    }
}