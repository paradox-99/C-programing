#include<stdio.h>

void main()
{
    int i,j,n,a,space;
    printf("Input: ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for (space=i;space<=n-1;space++)
            printf("_");
        for ( j = 1,a=i; j <= i; j++)
            printf("%d",a);
        printf("\n");
    }
}