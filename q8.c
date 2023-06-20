#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    float S;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    S= sqrt((a-b)*(a-b)+(c-d)*(c-d));
    printf("%f", S);
    return 0;
}