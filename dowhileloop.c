#include <stdio.h>
int main()
{
    int num, index=0;
    printf("enter a number\n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index+1);
        index=index+2;
    } while (index<num);
    return 0;
}