#include <stdio.h>
int main()
{
    int i, j, k, l;

    printf("\n");
    printf("\n");
    printf("\n");

    //  12345
    //  1234
    //  123
    //  12
    //  1

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //  1
    //  12
    //  123
    //  1234
    //  12345

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //  54321
    //  5432
    //  543
    //  54
    //  5

    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //  5
    //  54
    //  543
    //  5432
    //  54321

    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //  12345
    //  2345
    //  345
    //  45
    //  5

    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //  1
    //  21
    //  321
    //  4321
    //  54321

    for (i = 1; i <= 5; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //  54321
    //  4321
    //  321
    //  21
    //  1

    for (i = 5; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //  5
    //  45
    //  345
    //  2345
    //  12345

    for (i = 5; i >= 1; i--)
    {
        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //  1
    //  22
    //  333
    //  4444
    //  55555

    for (i = i; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    // 12345
    //  1234
    //   123
    //    12
    //     1

    for (i = 5; i >= 1; i--)
    {
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //      1
    //     12
    //    123
    //   1234
    //  12345

    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //  54321
    //   5432
    //    543
    //     54
    //      5

    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //      5
    //     54
    //    543
    //   5432
    //  54321

    for (i = 5; i >= 1; i--)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //      1
    //     21
    //    321
    //   4321
    //  54321

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
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //  54321
    //   4321
    //    321
    //     21
    //      1

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
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //      5
    //     45
    //    345
    //   2345
    //  12345

    for (i = 5; i >= 1; i--)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //  12345
    //   2345
    //    345
    //     45
    //      5

    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //      1
    //     22
    //    333
    //   4444
    //  55555

    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //  543212345
    //   4321234
    //    32123
    //     212
    //      1

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
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //      1
    //     212
    //    32123
    //   4321234
    //  543212345

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
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //  123454321
    //   2345432
    //    34543
    //     454
    //      5

    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        for (l = 4; l >= i; l--)
        {
            printf("%d", l);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //      5
    //     454
    //    34543
    //   2345432
    //  123454321

    for (i = 5; i >= 1; i--)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        for (l = 4; l >= i; l--)
        {
            printf("%d", l);
        }

        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //  543212345
    //   5432345
    //    54345
    //     545
    //      5

    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        for (l = i + 1; l <= 5; l++)
        {
            printf("%d", l);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //      1
    //     121
    //    12321
    //   1234321
    //  123454321

    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (l = i - 1; l >= 1; l--)
        {
            printf("%d", l);
        }

        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //  123454321
    //   1234321
    //    12321
    //     121
    //      1

    for (i = 5; i >= 1; i--)
    {
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (l = i - 1; l >= 1; l--)
        {
            printf("%d", l);
        }

        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //      5
    //     545
    //    54345
    //   5432345
    //  543212345

    for (i = 5; i >= 1; i--)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        for (l = i + 1; l <= 5; l++)
        {
            printf("%d", l);
        }

        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //      1
    //     222
    //    33333
    //   4444444
    //  555555555

    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        for (l = 2; l <= i; l++)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");
}