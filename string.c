#include <stdio.h>
int main()
{
    // string copying
    char str1[20], ch, str2[20], revstr[20];
    int i, j;
    printf("ENTER THE STRING str1 :");
    for (i = 0; (ch = getchar()) != '\n'; i++)
    {
        str1[i] = ch;
    }
    str1[i] = '\0';
    printf("str1 =%s\n", str1);
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("str2 =%s\n", str2);

    // reverse of string
    int k = 0;
    for (j = i - 1; j >= 0; j--)
    {
        revstr[k++] = str2[j];
    }
    printf("reverse =%s\n", revstr);

    // pallindrom string
    for (j = 0; j <= i - 1; j++)
    {
        if (str1[j] != revstr[j])
        {
            printf("NOT PALLIDROME\n");
            break;
        }
    }
    if (j==i)
    {
        printf("PALLIDROME\n");
    }

    // lenght of string
    printf("LENGTH OF STRING =%d",i);
       
}