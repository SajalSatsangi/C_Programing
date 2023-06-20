#include <stdio.h>
int main()
{
    int i, n, m1, m2, m3, m4, m5, total, grade, rollno;
    float avg, per;
    printf("enter the value of n=");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        printf("enter the roll no=");
        scanf("%d", &rollno);
        printf("enter the marks in subject 1=");
        scanf("%d", &m1);
        printf("enter the marks in subject 2=");
        scanf("%d", &m2);
        printf("enter the marks in subject 3=");
        scanf("%d", &m3);
        printf("enter the marks in subject 4=");
        scanf("%d", &m4);
        printf("enter the marks in subject 5=");
        scanf("%d", &m5);
        total = m1 + m2 + m3 + m4 + m5;
        avg = total / 5;
        per = (total / 500) * 100;
        if (avg >= 90)
        {
            printf("grade=A\n");
        }
        else if (avg >= 80 && avg < 90)
        {
            printf("grade=B\n");
        }
        else if (avg >= 70 && avg < 80)
        {
            printf("grade=c\n");
        }
        else if (avg >= 60 && avg < 70)
        {
            printf("grade=D\n");
        }
        else
        {
            printf("grade=E\n");
        }
        printf("roll no:-%d\n", rollno);
        printf("total=%d\n", total);
        printf("avg=%f\n", avg);
        printf("percentage:-%f\n", per);
        i++;
    }
}