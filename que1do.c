#include <stdio.h>
int main()
{
    int m, n, sum;
    printf("enter the mth integer and nth integer");
    scanf("%d %d", &m, &n);
    sum=0;
    for (m<n; m <= n; m++)
    {
        sum = sum +m;
        printf("sum=%d\n", sum);
    }
}