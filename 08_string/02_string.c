#include<stdio.h>
#include<ctype.h>

void main()
{
    char a,b;
    printf("Enter your letter: ");
    scanf("%c",&a);
    if (a>='0' && a<='9')
        printf("Wrong Input!!!");
    else if(a>='a' && a<='z')
        b=toupper(a);
    else if(a>='A' && a<='Z')
        b=tolower(a);
    printf("%c",b);
}