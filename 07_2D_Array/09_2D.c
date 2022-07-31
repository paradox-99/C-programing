#include<stdio.h>

void main()
{
    int i,j,n,arr[10][10],sum_1=0,sum_2=0,sum_3=0,sum_4=0;
    printf("Enter the matrix dimantion number: \n");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for ( i = 0; i < n; i++)
    {
        for( j=0; j<n; j++)
            scanf("%d",&arr[i][j]);
    }
    for ( i = 0; i < n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==0)
                sum_1=sum_1+arr[i][j];
            else if(i==n-1)
                sum_2=sum_2+arr[i][j];
            else if(i==j)
            {
                if(i==0 || i==n-1)
                    continue;
                else
                    sum_3=sum_3+arr[i][j];
            }
        }
    }
    for ( i = 1; i < n-1; i++)
    {
        for(j=n-1; j>=1; j--)
        {
            if(i==(n-1)/2)
                break;
            else if(j==(n-1)/2)
                sum_4=sum_4+arr[i][j];
        }
    }
    printf("Sum: %d",sum_1+sum_2+sum_3+sum_4);
}