#include<stdio.h>

void main()
{
    int i,n;
    printf("Enter term = ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        printf(" %d",i);
        if(i==n)
            break;
        printf(",");
    }
}