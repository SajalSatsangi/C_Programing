#include <stdio.h>
int main()
{
    int b[3][3], i, j;
    int a[3][3] = {{1, 2, 3}, {3, 4, 5}, {5, 6, 7}};
    printf("\nMATRIX\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nTRANPOSE OF MATRIX :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b[i][j] = a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}