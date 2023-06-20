#include <stdio.h>
int main()
{
    int c,f,a,b;
    printf("change from celcius to fahrenight\n");
    scanf("%d", &c);
    f=(9*c)/5+32;
    printf("%d\n", f);
    printf("change from farehnight to celcius\n");
    scanf("%d", &b);
    a=(b-32)*5/9;
    printf("%d", a);

    return 0;
}