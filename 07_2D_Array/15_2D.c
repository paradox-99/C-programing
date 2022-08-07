#include<stdio.h>

void main()
{
    int m,n,i,j,arr[20][20],sum=0;
    printf("Enter the dimension of matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the values: ");
    for ( i = 0; i < m; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d",&arr[i][j]);
    }
    for ( i = 0; i < m; i++)
    {
        for(j=0; j<n; j++)
            sum+=arr[i][j];
    }
    printf("Summation: %d",sum);
}