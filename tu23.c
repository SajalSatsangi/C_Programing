#include <stdio.h>

void area(int s)
{
    int area;
    area = 6*s*s;
    printf("%d \n", area);
}

void volume(int s)
{
    int volume;
    volume = s*s*s;
    printf("%d", volume);
}

int main()
{
    int s;
    printf("enter the value of s=");
    scanf("%d",&s);
    area(s);
    volume(s);
}