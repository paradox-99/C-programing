#include<stdio.h>
#include<ctype.h>

void main()
{
    char a,b;
    printf("Enter Capital letter: ");
    scanf("%c",&a);
    if ((a>='a' && a<='z') || (a>='0' && a<='9'))
        printf("Wrong Input!!!");
    else
        b=tolower(a);
    printf("%c",b);
}