#include<stdio.h>

void main()
{
    float number,sum=0,avg=0; int i,term;
    printf("How many number: ");
    scanf("%d",&term);
    printf("Enter your numbers = ");
    for ( i = 1; i <= term; i++)
    {
        scanf("%f",&number);
        sum=sum+number;
    }
    avg=sum/term;
    printf("AVG of %d inputs: %.3f",term,avg);
}
