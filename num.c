#include <stdio.h>
int main()
{
    int p, q, a, b, c;
    printf("check whether these three digit integers are num\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", a*a*a+b*b*b+c*c*c);
    p = a*b*c*3;
    q = a*a*a+b*b*b+c*c*c;
    if (p==q)
    
        printf("integers are num");
    
    else
        printf("integers are not num");
    
    
}