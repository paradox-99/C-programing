#include<stdio.h>

void main()
{
    int arr[10],i,count=0;
    printf("Enter your nubers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        if(arr[i]%5==0 || arr[i]%7==0)
        count++;
    }
    printf("Result: %d",count);
}