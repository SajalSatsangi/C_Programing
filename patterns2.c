#include <stdio.h>
int main()
{
    int i, j, k, l, p, m, n, o, a, b, c, d, e, f, g, h;

    printf("\n");
    printf("\n");
    printf("\n");

    //  54321234543212345
    //   4321234 4321234
    //    32123   32123
    //     212     212
    //      1       1
    //     212     212
    //    32123   32123
    //   4321234 4321234
    //  54321234543212345

    for (i = 5; i >= 1; i--)
    {
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        for (l = 2; l <= i; l++)
        {
            printf("%d", l);
        }
        for (p = 5; p > i; p--)
        {
            printf(" ");
        }
        for (m = 5; m > i; m--)
        {
            if (m != 5)
            {
                printf(" ");
            }
        }
        for (n = i; n >= 1; n--)
        {
            if (n != 5)
            {
                printf("%d", n);
            }
        }
        for (o = 2; o <= i; o++)
        {
            printf("%d", o);
        }
        printf("\n");
    }
    for (a = 2; a <= 5; a++)
    {
        for (b = 5; b > a; b--)
        {
            printf(" ");
        }
        for (c = a; c >= 1; c--)
        {
            printf("%d", c);
        }
        for (d = 2; d <= a; d++)
        {
            printf("%d", d);
        }
        for (e = 5; e > a; e--)
        {
            printf(" ");
        }
        for (f = 5; f > a; f--)
        {
            if (f != 5)
            {
                printf(" ");
            }
        }
        for (g = a; g >= 1; g--)
        {
            if (g != 5)
            {
                printf("%d", g);
            }
        }
        for (h = 2; h <= a; h++)
        {
            printf("%d", h);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //      1       1
    //     212     212
    //    32123   32123
    //   4321234 4321234
    //  54321234543212345
    //   4321234 4321234
    //    32123   32123
    //     212     212
    //      1       1

    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        for (l = 2; l <= i; l++)
        {
            printf("%d", l);
        }
        for (p = 5; p > i; p--)
        {
            printf(" ");
        }
        for (m = 5; m > i; m--)
        {
            if (m != 5)
            {
                printf(" ");
            }
        }
        for (n = i; n >= 1; n--)
        {
            if (n != 5)
            {
                printf("%d", n);
            }
        }
        for (o = 2; o <= i; o++)
        {
            printf("%d", o);
        }
        printf("\n");
    }
    for (a = 4; a >= 1; a--)
    {
        for (b = 5; b > a; b--)
        {
            printf(" ");
        }
        for (c = a; c >= 1; c--)
        {
            printf("%d", c);
        }
        for (d = 2; d <= a; d++)
        {
            printf("%d", d);
        }
        for (e = 5; e > a; e--)
        {
            printf(" ");
        }
        for (f = 5; f > a; f--)
        {
            if (f != 5)
            {
                printf(" ");
            }
        }
        for (g = a; g >= 1; g--)
        {
            if (g != 5)
            {
                printf("%d", g);
            }
        }
        for (h = 2; h <= a; h++)
        {
            printf("%d", h);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //      5       5
    //     4 4     4 4
    //    3   3   3   3
    //   2     2 2     2
    //  1       1       1

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        printf("%d", i);
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (l = 4; l > i; l--)
        {
            printf(" ");
        }
        if (i != 5)
        {
            printf("%d", i);
        }
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (j = 2; j < i; j++)
        {
            printf(" ");
        }
        if (i != 1)
        {
            printf("%d", i);
        }
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (l = 4; l > i; l--)
        {
            printf(" ");
        }
        if (i != 5)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //          1
    //         2 2
    //        3   3
    //       4     4
    //  12345       54321
    //   2             2
    //    3           3
    //     4         4
    //      5       5
    //     4         4
    //    3           3
    //   2             2
    //  12345       54321
    //       4     4
    //        3   3
    //         2 2
    //          1

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            printf(" ");
        }
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        printf("%d", i);
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        if (i != 1)
        {
            for (k = 2; k < i; k++)
            {
                printf(" ");
            }
            printf("%d", i);
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {
        printf("%d", i);
    }
    for (i = 1; i <= 7; i++)
    {
        printf(" ");
    }
    for (i = 5; i >= 1; i--)
    {
        printf("%d", i);
    }
    printf("\n");
    for (i = 2; i <= 5; i++)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        printf("%d", i);
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= 7; j++)
        {
            printf(" ");
        }
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        printf("%d", i);
        printf("\n");
    }
    for (i = 4; i >= 2; i--)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        printf("%d", i);
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= 7; j++)
        {
            printf(" ");
        }
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        printf("%d", i);
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {
        printf("%d", i);
    }
    for (i = 1; i <= 7; i++)
    {
        printf(" ");
    }
    for (i = 5; i >= 1; i--)
    {
        printf("%d", i);
    }
    printf("\n");
    for (i = 4; i >= 1; i--)
    {
        for (j = 1; j <= 4; j++)
        {
            printf(" ");
        }
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        printf("%d", i);
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        if (i != 1)
        {
            for (k = 2; k < i; k++)
            {
                printf(" ");
            }
            printf("%d", i);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //         5 4 3 2 1 2 3 4 5
    //        4 4               4
    //       3   3               3
    //      2     2               2
    //     123454321 2 3 4 5 4 3 2 1
    //     2       2               2
    //     3       3               3
    //     4       4    4321234    4
    //     5       5    3     3    5
    //     4  121  4    2     2    4
    //     3  2 2  3    1234321    3
    //     2  3 3  2               2
    //     123454321 2 3 4 5 4 3 2 1

    for (i = 5; i > 1; i--)
    {
        printf(" ");
    }
    for (i = 5; i >= 1; i--)
    {
        printf("%d", i);
        printf(" ");
    }
    for (i = 2; i <= 5; i++)
    {
        printf("%d", i);
        printf(" ");
    }
    printf("\n");
    for (i = 4; i >= 2; i--)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        printf("%d", i);
        for (j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (j = 4; j > i; j--)
        {
            printf(" ");
        }
        if (i != 5)
        {
            printf("%d", i);
        }
        for (j = 1; j <= 15; j++)
        {
            printf(" ");
        }
        printf("%d", i);
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {
        printf("%d", i);
    }
    for (i = 4; i >= 1; i--)
    {
        printf("%d", i);
    }
    for (i = 2; i <= 5; i++)
    {
        printf(" ");
        printf("%d", i);
    }
    for (i = 4; i >= 1; i--)
    {
        printf(" ");
        printf("%d", i);
    }
    printf("\n");
    for (i = 2; i < 4; i++)
    {
        for (j = 2; j < 3; j++)
        {
            printf("%d", i);
        }
        for (j = 1; j < 8; j++)
        {
            printf(" ");
        }
        for (j = 2; j < 3; j++)
        {
            printf("%d", i);
        }
        for (j = 1; j < 16; j++)
        {
            printf(" ");
        }
        for (j = 2; j < 3; j++)
        {
            printf("%d", i);
        }
        if (i < 3)
        {
            printf("\n");
        }
    }
    printf("\n");
    printf("4");
    for (i = 1; i < 8; i++)
    {
        printf(" ");
    }
    printf("4");
    printf("    4321234    ");
    printf("4");
    printf("\n");
    printf("5       5    3     3    5");
    printf("\n");
    printf("4  121  4    2     2    4");
    printf("\n");
    printf("3  2 2  3    1234321    3");
    printf("\n");
    printf("2  3 3  2               2");
    printf("\n");
    for (i = 1; i <= 5; i++)
    {
        printf("%d", i);
    }
    for (i = 4; i >= 1; i--)
    {
        printf("%d", i);
    }
    for (i = 2; i <= 5; i++)
    {
        printf(" ");
        printf("%d", i);
    }
    for (i = 4; i >= 1; i--)
    {
        printf(" ");
        printf("%d", i);
    }

    printf("\n");
    printf("\n");
    printf("\n");
}