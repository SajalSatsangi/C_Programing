#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10][10], b[10][10], mul[10][10], r, c, i, j, k;
    system("cls");
    printf("enter the number of row=");
    scanf("%d", &r);
    printf("enter the number of column=");
    scanf("%d", &c);
    printf("enter the first matrix element=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the second matrix element=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("multiply of the matrix=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // for printing result
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int i, j, sum = 0, t, k;
    int a[5][5], b[5][5], c[5][5];
    printf("ENTER MATRIX A=\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("ENTER THE %d,%d =", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("\nENTER MATRIX B=\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("ENTER THE %d,%d =", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    printf("\nMATRIX A =\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nMATRIX B =\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("\nMATRIX AXB =\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                t = (a[j][k]) * (b[k][j]);
                sum = sum + t;
            }
            c[i][j] = sum;
            printf("%d ", c[i][j]);
            sum = 0;
        }
        printf("\n");
    }
}