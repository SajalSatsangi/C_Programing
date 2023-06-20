#include <stdio.h>
struct record
{
    int roll;
    char name[20];
    int marks[5];
};
typedef struct record student;
student stu[20];
int main()
{
    int n, i, roll, j, sum = 0;
    printf("ENTER THE NUMBER OF THE STUDENETS :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("STUDENT %d ROLL No :", i + 1);
        scanf("%d", &stu[i].roll);
        printf("STUDENT %d NAME :", i + 1);
        scanf("%s", stu[i].name);
        for (j = 0; j < 5; j++)
        {
            printf("STUDENT SUBJECT %d marks :", j + 1);
            scanf("%d", &stu[i].marks[j]);
        }
    }
    printf("\n\n\n");
    for (i = 0; i < n; i++)
    {
        printf("STUDENT %d ROLL No %d:", i + 1, stu[i].roll);
        printf("STUDENT %d NAME %s:", i + 1, stu[i].name);
        for (j = 0; j < 5; j++)
        {
            printf("STUDENT SUBJECT %d marks %d:", j + 1, stu[i].marks[j]);
            printf("\n");
        }
        printf("\n\n");
    }
    printf("\n\n\n");
    printf("ENTER THE ROLL No :");
    scanf("%d", &roll);

    for (i = 0; i < n; i++)
    {
        if (roll == stu[i].roll)
        {
            printf("NAME :%s\n", stu[i].name);
            for (j = 0; j < 5; j++)
            {
                sum = sum + stu[i].marks[j];
            }
            printf("SUM OF MARKS %d", sum);
            break;
        }
    }
    if (i == n)
    {
        printf("STUDENT NOT FOUND");
    }

    return 0;
}