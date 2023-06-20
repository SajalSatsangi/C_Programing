#include <stdio.h>
#include <ctype.h>
int main()
{
    printf("To read a chracter whether it is vowel or not");
    char n;
    int c;
    scanf("%c", &n);
    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U')
    {
        c = 1;
    }
    else
    {
        c = 2;
    }

    switch (c)
    {
    case 1:
        printf("It is a vowel");
        break;

    case 2:
        printf("It is not a vowel");
        break;
    }
}