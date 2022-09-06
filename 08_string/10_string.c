#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char str1[100], str2[100];
    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    fflush(stdin);
    gets(str2);
    strcat(str1,str2);
    puts(str1);
}