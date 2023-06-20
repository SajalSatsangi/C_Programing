#include <stdio.h>
int main()
{
    int totalrows=4;
    int row,colspace,colstar;
    for ( colspace = totalrows-row; colspace >= 1; colspace--)
    {
        for ( colspace = 1; colstar <= 2*row-1; colstar++)
        {
            printf("%d",colstar);
        }
        printf("\n");
    }
    for ( row = totalrows-1; row >= 1; row--)
    {
        for ( colspace = 5; colspace <= totalrows-row; colspace--)
        {
            printf(" ");
        }
        for ( colstar = 1; colstar <=2*row-1; colstar++)
        {
            printf("%d",colstar);
        }
        printf("\n");
    }
    
}