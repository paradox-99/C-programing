#include<stdio.h>

void main()
{
    int arr[100],n,i,j;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    if(n>=0)
    {
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
        for(i=0; i<n; i++)
        {
            if (i%2!=0)
            {
                arr[i]=0;
            }
        }
        for(i=0; i<n; i++)
            printf("%d\t",arr[i]);
    }
    else
        printf("N must be positive integer..");
}