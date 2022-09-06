#include<stdio.h>
#include<string.h>

void main()
{
    char a[100],b[100]; int i,j, flag=0; 
    puts("Enter your text: ");
    gets(a);
    for(i=0, j=strlen(a)-1; i < strlen(a), j>=0; i++, j--)
        b[j]=a[i];
    for ( i = 0; i < strlen(a); i++)
    {
        if(a[i] != b[i])
        {
            printf("Not Palindrome");
            break;
        }
        else
            flag=1;
    }
    if(flag==1)
        printf("Palindrome");
}