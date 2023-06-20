#include <stdio.h>
#define pi 3.14
int main()
{
    int A, R, V;
    scanf("%d", &R);
    A=4*pi*R*R;
    printf("%d\n",A);
    V=A*R/3;
    printf("%d", V);
}