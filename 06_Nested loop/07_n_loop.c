#include<stdio.h>

void main()
{
    int row,star,n;
    printf("Input row: ");
    scanf("%d",&n);
    for ( row = 1; row <= n ; row++)
    {
        for ( star = 1; star <= n; star++)
            printf("*");
        printf("\n");
    } 
}