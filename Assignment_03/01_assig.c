#include<stdio.h>

void intput()
{
    int i; char a[150];
    printf("Enter your string data: ");
    gets(a);
    i=0;
    while (a[i] != '\0')
    {
        i++;
    }
    printf("The length of string is: %d",i);
    
}

void main()
{
    intput();
}