#include<stdio.h>

void main()
{
    int i,n,s;
    printf("Enter term = ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        s=2*i-1;
        printf(" %d",s);
        if(i==n)
            break;
        printf(",");
    }
}