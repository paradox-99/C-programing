#include<stdio.h>
#include<ctype.h>
#include<string.h>

void main()
{
    char a[100]; int i,count=0; 
    puts("Enter your text: ");
    gets(a);
    for(i=0; i < strlen(a); i++)
    {
        if(isupper(a[i]) == 1)
            a[i]=tolower(a[i]);
        else
            a[i]=toupper(a[i]);
    }
    puts(a);
}