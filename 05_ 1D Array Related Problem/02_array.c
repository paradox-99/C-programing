#include<stdio.h>
void main()
{
    int arry[100],i,n,sum=0;
    printf("How many numbers = ");
    scanf("%d",&n);
    printf("Enter  the numbers: ");
    for( i = 0; i<n; i++)
        scanf("%d",&arry[i]);
    for( i = 0; i<n; i++)
        sum=sum+arry[i];
    printf("The summation is= %d",sum);
}