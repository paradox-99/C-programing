#include<stdio.h>

void main()
{
    int arry[100],i,n;
    printf("How many numbers = ");
    scanf("%d",&n);
    printf("enter  the numbers: ");
    for( i = 1; i<=n; i++){
        scanf("%d",&arry[i]);
    }
    for(i=n; i>0; i--)
    {
        printf("%d\t",arry[i]);
    }
}