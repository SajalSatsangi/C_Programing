#include <stdio.h>
int main()
{
    int p;
    printf("prize distribution \n");
    printf("enter 1 if you have passed both maths and science\n");
    printf("enter 2 if you have passed maths\n");
    printf("enter 3 if you have passed science\n");

    scanf("%d", &p);
    if(p==1)
    {  
        printf("congratulations you won 45 rs");
    }
    
    else if(p==2||3)
    {
        printf("congratulations you won 15 rs");
    }
    
    else {
        printf("sorry you will get nothing");
    }
    return 0;
}  