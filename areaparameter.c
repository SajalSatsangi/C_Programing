#include <stdio.h>

int area(int s)
{
    int A;
    A = s * s;
    return A;
}

int parameter(int s)
{
    int P;
    P = 4 * s;
    return P;
}

int main()
{
    int s, P, A, F, F1;
    printf("enter side of the square");
    scanf("%d", s);
    F = area(s);
    F1 = parameter(s);
    printf("%d %d", F, F1);
}
