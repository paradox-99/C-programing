#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void main()
{
    char a[2];
    int x;
    printf("Give input: ");
    scanf("%c",&a);
    if (isdigit(a[0]) == 1)
    {
        x=atoi(a);
        printf("Conversion: %d", x);
    }
    else
        printf("Wrong Input !!!");
}