#include <stdio.h>
int main()
/*{
    int i, j;
    for (i = 1; i <=5; i++)
    {
        for (j = 5; j >= 1; j--)
        {
            if (i>=j)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}*/

/*
{
int i,j, max=0, min=0;
int A[5]= {5,4,2,1,3};
for ( i = 0; i <5 ; i++)
{
    if (A[i]<A[min])
    {
        min=i;
    }
    if (A[i]>A[max])
    {
        max=i;
    }
}
printf("%d\n",A[max]);
printf("%d",A[min]);
}
*/

{
    int a[20], n, i,j, temp;
    printf("enter the size of array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter the elements");
        scanf("%d", &a[i]);
    }
    if (a[0] > a[1])
    {
        temp = a[0];
        a[0] = a[1];
        a[1] = temp;
    }

    for (j = 0; j < n; j++)
    {
        printf("%d\n",a[j]);
    }
}