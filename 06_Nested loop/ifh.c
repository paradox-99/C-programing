#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    printf("Enter your text: ");
    gets(a);
    printf("The characters of the string in reverse are: %s",strrev(a));
}