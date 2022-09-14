#include<stdio.h>

void func(char  b)
{
    printf("value recived from main: %c",b);
}

void main()
{
    char a;
    printf("Enter character: ");
    scanf("%c",&a);
    func(a);
}