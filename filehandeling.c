#include <stdio.h>
struct records
{
    int roll;
    char name[20];
    int marks[5];
};
typedef struct records student;
int main()
{
    int i, n, j, k;
    student stu[100];
    FILE *ptr, *ntr;
    ptr = fopen("student_record.txt", "a");
    if (ptr == NULL)
    {
        printf("FILE DOES NOT EXIST");
    }
    else
    {
        printf("ENTER THE No OF STUDENTS :");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            printf("STUDENT %d :", i + 1);
            fprintf(ptr, "STUDENT %d :-\n", i + 1);
            printf("ROLL No. :");
            scanf("%d", &stu[i].roll);
            fprintf(ptr, "ROLL No. : %d\n", stu[i].roll);
            printf("NAME :");
            scanf("%s", stu[i].name);
            fprintf(ptr, "NAME : %s\n", stu[i].name);
            for (j = 0; j < 5; j++)
            {
                printf("MARKS OF SUBJECT %d :", j + 1);
                scanf("%d", &stu[i].marks[j]);
                fprintf(ptr, "MARKS OF SUBJECT %d :  %d", j + 1, stu[i].marks[j]);
                if (j == 4)
                    break;
                fprintf(ptr, "\n");
            }
            if (i == n - 1)
                break;
            fprintf(ptr, "\n\n");
        }
        ntr = fopen("updated_student_record.txt", "w");
        printf("ENTER THE ROLL No. OF STUDENT :");
        scanf("%d", &k);
        for (i = 0; i < n; i++)
        {
            if (stu[i].roll != k)
            {
                fprintf(ntr, "STUDENT %d :-\n", i + 1);
                fprintf(ntr, "ROLL No. : %d\n", stu[i].roll);
                fprintf(ntr, "NAME : %s\n", stu[i].name);
                int sum = 0;
                for (j = 0; j < 5; j++)
                {
                    sum = sum + stu[i].marks[j];
                }
                fprintf(ntr, "MARKS OF SUBJECT :  %d", sum);
                if (i == n - 1)
                    break;
                fprintf(ntr, "\n\n");
            }
        }
    }
}