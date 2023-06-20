#include <stdio.h>
int findMax(int arr[], int max)
{
    int n;
    if (n < 0)
        return max;
    else
    {
        if (max < arr[n])
            max = arr[n];
        return findMax(arr[n - 1], max);
    }
}

int main()
{
    int n=6;
    int arr[] = {12, 4, 67, 8, 9, 15};
    int t = findMax(arr[n], arr[0]);
    printf("%d", t);
    return 0;
}