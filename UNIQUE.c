#include <stdio.h>
int main()
{   
    int check = 0, n, a = 0;
    
    printf("Enter the number:");
    scanf("%d", &n);
    int b = n;
    
    // int digit = 0;
    // while(n != 0)
    // { 
    //   n = n/10;
    //   digit++;
    // }    
    // printf("The value of digit in the number is %d", digit);
    
    while(n != 0)
    {   
        int n2 = n;
        int lastdigit = n%10;
        
        while(n2!=0)
        {   n2 = n2/10;
            if( lastdigit == n2%10)
                check = 1;
        }
        n = n / 10;
    }
    
    if(check == 1)
        printf("The number is not a unique");
    else if(check == 0)
        printf("The number is unique");
}