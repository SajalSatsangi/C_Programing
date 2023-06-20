#include <stdio.h>
int main()
{
    float a;
    int b;
    float c;
    // a is a real number
    printf("enter the real number\n");
    scanf("%f", &a);
    b=a;
    c=a-b;
    printf("integral part=%d\n", b);
    printf("fraction part=%f", c);
}