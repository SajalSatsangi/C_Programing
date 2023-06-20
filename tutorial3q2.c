#include <stdio.h>
int main()
{
    int angle, n, b, c;
    printf("program is created by sajal satsangi\n");
    printf("enter the angle=");
    scanf("%d", &angle);
    n = angle / 360;
    b = angle - (n * 360);
    printf("b= %d\n", b);
    printf("if 0<b<=90 or -360<=b<-270  so enter c = 1\n");
    printf("if 90<b<=180 or -270<=b-180  so enter c = 2\n");
    printf("if 180<b<=270 or -180<=b<-90  so enter c = 3\n");
    printf("if 270<b<=360 or -90<=b<0  so enter c = 4\n");
    printf("enter the value of c =");
    scanf("  %d", &c);
    switch (c)
    {
    case 1:
        printf("first quadrant");
        break;
    case 2:
        printf("second quadrant");
        break;
    case 3:
        printf("third quadrant");
        break;
    case 4:
        printf("fourth quadrant");
        break;
    }
}