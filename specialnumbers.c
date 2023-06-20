#include <stdio.h>
int main()
{
    int n, r, t, m = 0, f = 0, l = 0, x = 0, y, a, b, c, d, e, i, k, g, h = 0, z, q = 0, u, w, v, s;
    printf("\n\n\n");
    printf("ENTER THE NUMBER: ");
    scanf("%d", &n);
    printf("\n");
    a = b = c = d = e = z = u = n;

    // COUNT THE DIGITS
    while (n > 0)
    {
        n = n / 10;
        m++;
    }
    printf("TOTAL NO. OF DIGITS = %d\n", m);

    //  SUM OF DIGITS
    while (a > 0)
    {
        r = a % 10;
        a = a / 10;
        f = f + r;
    }
    printf("SUM OF DIGITS = %d\n", f);

    //  REVERSE OF NUMBER
    while (b > 0)
    {
        r = b % 10;
        b = b / 10;
        l = l * 10 + r;
    }
    printf("REVERSE OF NUMBER = %d\n", l);

    //  PALLIDROME NUMBER
    y = c;
    while (c > 0)
    {
        r = c % 10;
        c = c / 10;
        x = x * 10 + r;
    }
    if (y == x)
    {
        printf("PALINDROME NUMBER\n");
    }
    else
    {
        printf("NOT PALINDROME NUMBER\n");
    }

    //  ARMSTRONG NUMBER
    x = 0;
    y = d;
    while (d > 0)
    {
        r = d % 10;
        d = d / 10;
        x = x + r * r * r;
    }
    if (y == x)
    {
        printf("ARMSTRONG NUMBER\n");
    }
    else
    {
        printf("NOT ARMSTRONG NUMBER\n");
    }

    //  UNIQUE NUMBER
    while (e > 0)
    {
        i = e % 10;
        e = e / 10;
        t = e;
        while (e > 0)
        {
            k = e % 10;
            e = e / 10;
            if (i == k)
            {
                printf("NOT UNIQUE NUMBER\n");
                break;
            }
        }
        e = t;
        if (i == k)
        {
            break;
        }
    }
    if (e == 0)
    {
        printf("UNIQUE NUMBER\n");
    }

    //  AUTOMORPHIC NUMBER
    g = u * u;
    while (u > 0)
    {
        r = g % 10;
        g = g / 10;
        u = u / 10;
        h = h * 10 + r;
    }
    while (z > 0)
    {
        r = z % 10;
        z = z / 10;
        q = q * 10 + r;
    }
    if (h == q)
    {
        printf("AUTOMORPHIC NUMBER \n");
    }
    else
    {
        printf("NOT AUTOMORPHIC NUMBER \n");
    }

    //  LUCKY NUMBER
    printf("\n\n");
    printf("ENTER THE DATE OF BIRTH :\n");
    printf("DATE = ");
    scanf("%d", &d);
    printf("MONTH = ");
    scanf("%d", &m);
    printf("YEAR = ");
    scanf("%d", &y);
    t = 0;
    h = 0;
    q = 0;
    c = 0;
    a = 0;
    while (d > 0)
    {
        r = d % 10;
        d = d / 10;
        t = t + r;
    }
    while (m > 0)
    {
        r = m % 10;
        m = m / 10;
        h = h + r;
    }
    while (y > 0)
    {
        r = y % 10;
        y = y / 10;
        q = q + r;
    }
    z = t + h + q;
    if (z >= 10)
    {
        while (z > 0)
        {
            r = z % 10;
            z = z / 10;
            a = a + r;
        }
        if (a >= 10)
        {
            while (a > 0)
            {
                r = a % 10;
                a = a / 10;
                c = c + r;
            }
            printf("LUCKY NUMBWWER = %d", c);
        }
        else
        {
            printf("LUCKY NUMBER = %d", a);
        }
    }
    else if (z < 10)
    {
        printf("LUCKY NUMBER = %d", z);
    }

    printf("\n\n\n");
    return 0;
}