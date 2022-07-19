#include<stdio.h>

void main()
{
    int num,term,i,sum=0;
    printf("How many term: ");
    scanf("%d",&term);
    for (i = 1; i <= term; i++)
    {
        if(i%2==0)
            sum=sum-i;
        else
            sum=sum+i;
    }
    printf("Result: %d",sum);
}