#include <stdio.h>
int main()
{
    int x=1,y=2,z=3;
    y=x++;
    z=y++;
    printf("%d%d%d",x,y,z);
}