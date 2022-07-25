#include<stdio.h>

void main()
{
    int i,j,n,a;
    printf("Input: ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1,a=i; j <= i; j++,a++)
            printf("%d",a);
        printf("\n");
    }
}