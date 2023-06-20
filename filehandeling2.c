#include <stdio.h>
int main()
{
    int roll[100], marks[100][5], i, n, j, k;
    char name[5];
    FILE *ptr, *ntr;
    ptr = fopen("student_record2.txt", "w");
    ntr = fopen("updated_student_record2.txt", "w");
    printf("ENTER NO OF STUDENTS :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("STUDENT %d :\n", i + 1);
        fprintf(ptr, "STUDENT %d :-\n", i + 1);
        printf("ENTER THE ROLL No. :");
        scanf("%d", &roll[i]);
        fprintf(ptr, "ROLL No. : %d\n", roll[i]);
        printf("ENTER THE NAME :");
        scanf("%s", name);
        fprintf(ptr, "NAME : %s\n", name);
        for (j = 0; j < 5; j++)
        {
            printf("ENTER MARKS %d :", j + 1);
            scanf("%d", &marks[i][j]);
            fprintf(ptr, "MARKS OF SUBJECT %d :  %d", j + 1, marks[i][j]);
            if (j == 4)
                break;
            fprintf(ptr, "\n");
        }
        if (i == n - 1)
            break;
        fprintf(ptr, "\n\n");
    }
    printf("ENTER THE ROLL No. OF STUDENT :");
    scanf("%d", &k);
    for (i = 0; i < n; i++)
    {
        if (roll[i] != k)
        {
            fprintf(ntr, "STUDENT %d :-\n", i + 1);
            fprintf(ntr, "ROLL No. : %d\n", roll[i]);
            fprintf(ntr, "NAME : %s\n", name[i]);
            int sum = 0;
            for (j = 0; j < 5; j++)
            {
                sum = sum + marks[i][j];
            }
            fprintf(ntr, "MARKS OF SUBJECT :  %d", sum);
            if (i == n - 1)
                break;
            fprintf(ntr, "\n\n");
        }
    }
}