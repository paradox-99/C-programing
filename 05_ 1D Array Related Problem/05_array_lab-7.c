#include<stdio.h>

void main()
{
    int arry[100],arr[100],i,n,a;
    printf("How many numbers = ");
    scanf("%d",&n);
    printf("enter  the numbers: ");
    for( i = 0; i<n; i++)
        scanf("%d",&arry[i]);
    for(i=0; i<n; i++)
        arr[i]=arry[i];
    for(i=n-1; i>=0; i--)
    {
        arry[i]=arr[i];
        printf("%d\t",arry[i]);
    }
}