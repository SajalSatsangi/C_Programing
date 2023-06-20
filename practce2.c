#include <stdio.h>
int main()
{
    int i, j, n, temp;
    int arr[] = {16, 4, 15, 13, 1, 2};
    n = 6;
    printf("UNSORTED ARRAY : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    printf("\nSORTED ARRAY   : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}