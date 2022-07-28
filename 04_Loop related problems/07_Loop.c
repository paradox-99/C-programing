#include<stdio.h>
void main()
{
    char var; int i;
    printf("Give input = ");
for ( i = 1; i ; i++)
    {
        scanf("%c",&var);
        fflush(stdin);
        if(var=='A')
            break;
        printf("Input %d: %c\n",i,var);
    }
}