#include<stdio.h>

void main()
{
    int arry[100],i,n;
    printf("How many numbers = ");
    scanf("%d",&n);
    printf("enter  the numbers: ");
    for( i = 0; i<n; i++)
        scanf("%d",&arry[i]);
    for(i=n-1; i>=0; i--)
        printf("%d\t",arry[i]);
}