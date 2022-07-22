#include<stdio.h>

void main()
{
    int term,i,sum=0;
    printf("How many term: ");
    scanf("%d",&term);
    for (i = 1; i <= term; i++)
        sum=sum+(i*i*(i+1));
    printf("Result: %d",sum);
}