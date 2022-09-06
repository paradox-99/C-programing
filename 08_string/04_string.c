#include<stdio.h>
#include<string.h>
void main()
{
    char a[100]; int count; 
    puts("Enter your text: ");
    gets(a);
    count = strlen(a);
    printf("%d",count);
}