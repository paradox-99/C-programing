#include<stdio.h>

void main()
{
    int i,j,n,a;
    printf("Input: ");
    scanf("%d",&n);
    for ( i = n; i > 0; i--)
    {
        for ( j = n; j >= i; j--)
            printf("%d",j);
        printf("\n");
    }
}
