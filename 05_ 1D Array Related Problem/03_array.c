#include<stdio.h>

void main()
{
    int i,sum=0,arry[100],term;
    printf("How mnany numbers: ");
    scanf("%d",&term);
    for ( i = 0; i < term; i++)
    {
        scanf("%d",&arry[i]);
    }
    for ( i = 0; i < term; i++)
    {
        if(arry[i]%2==0)
            sum=sum+arry[i];
    }
    printf("The summation is = %d",sum);
}