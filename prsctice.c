#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rollno;
    char ch, name[20];
    int marks[5];
    int i, j, k, n;
    printf("Enter no. of students ");
    scanf("%d", &n);
    FILE *ptr, *str;

    ptr = fopen("file1.txt", "w");
    str = fopen("file2.txt", "w");
    if (ptr == NULL)
    {

        printf("Not found ");
    }

    else
    {
        for (i = 1; i <= n; i++)
        {
            printf("Enter %d student Rollno:", i);
            scanf("%d", &rollno);
            printf("Enter %d student Name:", i);
            scanf("%s", name);
            for (j = 0; j < 5; j++)
            {
                printf("Enter %d student %d subject Marks:", i, j + 1);
                scanf("%d", &marks[j]);
            }
            fprintf(ptr, "%d %s %d %d %d %d %d \n  ", rollno, name, marks[0], marks[1], marks[2], marks[3], marks[4]);
        }
    }
    fclose(ptr);
    if (str == NULL)
    {
        printf("Not found ");
    }
    else
    {
        printf("Enter roll no looking for:\n");
        scanf("%d", &k);

        while (!feof(ptr))
        {
            fscanf(ptr, "%d%s%d%d%d%d%d", &rollno, name, &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);
        }
        for (i = 0; i < n; i++)
        {
            if (k != rollno)
            {
                fprintf(str, "Rollno.:%d ", rollno);
                fprintf(str, "Name:%s ", name);
                fprintf(str, "Sum:%d\n", marks[0] + marks[1] + marks[2] + marks[3] + marks[4]);
            }
        }
    }
    fclose(str);
    return 0;
}