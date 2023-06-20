#include <stdio.h>
int main()
{
    int date, month, year;
    printf("enter the date=");
    scanf(" %d", &date);
    printf("enter the month=");
    scanf(" %d", &month);
    printf("enter the year=");
    scanf(" %d", &year);

    switch (month)
    {
    case 1:
        printf("%d JAN %d", date, year);
        break;
    case 2:
        printf("%d FEB %d", date, year);
        break;
    case 3:
        printf("%d MAR %d", date, year);
        break;
    case 4:
        printf("%d APR %d", date, year);
        break;
    case 5:
        printf("%d MAY %d", date, year);
        break;
    case 6:
        printf("%d JUN %d", date, year);
        break;
    case 7:
        printf("%d JUL %d", date, year);
        break;
    case 8:
        printf("%d AUG %d", date, year);
        break;
    case 9:
        printf("%d SEP %d", date, year);
        break;
    case 10:
        printf("%d OCT %d", date, year);
        break;
    case 11:
        printf("%d NOV %d", date, year);
        break;
    case 12:
        printf("%d DEC %d", date, year);
        break;
    }
}