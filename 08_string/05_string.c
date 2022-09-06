#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    char a[100];
    int i;
    printf("Enter your text: ");
    gets(a);
    for ( i = 0; i < strlen(a); i++)
    {
        if (isupper(a[i]) == 1)
            a[i]=tolower(a[i]);
    }
    puts(a);
}