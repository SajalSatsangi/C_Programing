#include <stdio.h>
int main()
{
    int a;
    float b, c, r;
    printf("square=1\n");
    printf("rectangle=2\n");
    printf("circle=3\n");
    printf("enter the value according to required shape=");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("enter the side of square=");
        scanf("%f",&b);
        printf("area= %f\n", b * b);
        printf("perameter= %f", 4 * b);
        break;
    case 2:
        printf("enter the lenght of the rectangle=");
        scanf("%f",&b);
        printf("enter the width of the rectangle=");
        scanf("%f",&c);
        printf("area= %f\n", b * c);
        printf("perameter= %f", 2 * (b + c));
        break;
    case 3:
        printf("enter the radius of the circle=");
        scanf("%f", &r);
        printf("area= %f\n", 3.14 * r * r);
        printf("perameter= %f", 2 * 3.14 * r);
        break;
    default:
        printf("invalid value you can choose only from 1,2,3");
        break;
    }
}