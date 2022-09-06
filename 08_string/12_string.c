#include<stdio.h>
#include<string.h>
void main()
{
    char a[150];
    int i;
    printf("Enter text: ");
    gets(a);
    for ( i = 0; i < strlen(a); i++)
    {
        if(a[i] == ' ')
            printf("\n");
        else
            printf("%c",a[i]);
    } 
}