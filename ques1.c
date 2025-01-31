#include<stdio.h>

int main()
{
    char name[100];
    char *p;
    int i, length = 0;
    
    printf("Enter any string : ");
    gets(name);
    
    p = name;
    
    for(i = 0; *(p + i) != '\0'; i++)
    {
        length++;
    }
    
    printf("Length of string is %d",length);
    
    return 0;
}
