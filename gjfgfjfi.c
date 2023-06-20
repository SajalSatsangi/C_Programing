#include <stdio.h>

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int num;
    printf("enter the number you want the factorial of\n");
    scanf("%d", &num);
    printf("the factorial of %d is %d", num, factorial(num));

    return 0;
}