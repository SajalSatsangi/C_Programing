#include <stdio.h>
int main()
{
    int a, b = 0, c = 0, sum=0;
    printf("Enter the value of a upto which you want the sum of the series: ");
    scanf("%d", &a);
    int k = 1;
    for (int i = 1; i < 2 * a; i = i + 2)
    {
        if (k % 2 == 0)
        {
            b += i;
        }
        else if (k % 2 != 0)
        {
            c += i;
        }
        sum=sum+b/c;
        k++;
    }
    printf("so the sum of the series would be %d", sum);
    return 0;
}