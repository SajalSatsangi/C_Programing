#include <stdio.h>
#include <math.h>

int main()
{
    
    int n,c, b = 0, digit = 0, t = 0;
    printf("Enter the number");
    scanf("%d", &n);
    b = n;
    
    while (n!=0)
    {
        n = n /10;
        digit++;
    }
    
    n = b;

    while (n != 0)
    {
        int c = n%10;
        n = n/10;
        t = t + c*pow(10, digit-1);
        digit = digit -1;
    }
    if( t == b)
        printf("Enter the interger is palidrome");
    if( t != b)
        printf("Enter the interger is not palidrome");
    return 0;
}
