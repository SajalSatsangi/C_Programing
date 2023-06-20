/*
S S S S S 
S S S S S
S S O S S
S S S S S
S S S S S
*/

#include<stdio.h>
int main()
{
    int i, j;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j <5 ; j++)
        {
            if (i==2&&j==2)
            {
                printf("O");
            }
            else
            {
                printf("S");
            }
            
        }
        printf("\n");
        
    }
    
}