#include<stdio.h>

void main()
{
    int max,max_pos=0,min,min_pos=0,arry[100],i,n;
    printf("How many term = ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arry[i]);
    }
    max=arry[0];
    min=arry[0];
    for ( i = 0; i < n; i++)
    {
        if (max<arry[i])
        {
            max = arry[i];
            max_pos=i;
        }
    }
    for ( i = 0; i < n; i++)
    {
        if(min>arry[i])
        {
            min=arry[i];
            min_pos=i;
        }
    }
    printf("Mix= %d, Index: %d",max,max_pos);
    printf("\nMin= %d, Index: %d",min,min_pos);
}