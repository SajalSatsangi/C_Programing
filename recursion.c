#include <stdio.h>
int searchNumber(int a[], int k, int n)
{
    if (n >= 0)
    {
        if (a[n] == k)
            return 1;
        searchNumber(a, k, n - 1);
    }
    else
        return 0;
}

int main()
{
    int i, n, a[100], k;
    printf("ENTER THE SIZE OF ARRAY :");
    scanf("%d", &n);
    printf("ENTER THE ELEMENT OF ARRAY :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d: ",i+1);
        scanf("%d", &a[i]);
    }
    printf("ENTER THE No. :");
    scanf("%d", &k);
    if (searchNumber(a, k, n))
        printf("number found");
    else
        printf("number not found");
    return 0;
}