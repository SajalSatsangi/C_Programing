#include <stdio.h>
#include <string.h>
int main()
{
    char name[20],name2[20];
    printf("ENTER A STRING");
    gets(name);
    printf("%s\n",name);
    strcpy(name,name2);
   // printf("%s\n",name);
    printf("%s\n",name2);
}