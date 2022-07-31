#include<stdio.h>

void main()
{
    int n,i; float arr[100],sum,avg;
    printf("How many numbers= ");
    scanf("%d",&n);
    printf("Enter numbers: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%f",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("Average: %f",avg);
}