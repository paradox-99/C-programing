#include<stdio.h>
#include<string.h>

void main()
{
    char str1[100], str2[100];
    int i;
    printf("Enter 1st string: ");
    gets(str1);
    for ( i = 0; i < strlen(str1); i++)
        str2[i]=str1[i];
    printf("Output: ");
    puts(str2);
}