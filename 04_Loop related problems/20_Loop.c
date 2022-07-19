#include<stdio.h>

void main()
{
    int d1=0,n,sum=0,i;
    printf("Enter term = ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        d1=d1*10+i;
        sum=sum+d1;
    }
    printf("Output = %d",sum);
}