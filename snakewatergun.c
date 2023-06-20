#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int number;
    int upper = 3, lower = 1;
    int you;
    printf(".1 means snake\n .2 means water\n .3 means gun");
    printf("\nyour chance \n");

    scanf("%d", &you);
    number = (rand() % (upper - lower + 1)) + lower;
    if ((you == 1) && (number == 2))
    {
        printf("you are the winner");
    }
    else if ((you == 1) && (number == 3))
    {
        printf("you are the looser");
    }
    else if ((you == 2) && (number == 1))
    {
        printf("you are the looser");
    }
    else if ((you == 2) && (number == 3))
    {
        printf("you are the winner");
    }
    else if ((you == 3) && (number == 1))
    {
        printf("you are the winner");
    }
    else if ((you == 3) && (number == 2))
    {
        printf("you are the looser");
    }
    else if (you==number)
    {
        printf("draw");        
    }
    else
    {
        printf("you input wrong number");
    }
}