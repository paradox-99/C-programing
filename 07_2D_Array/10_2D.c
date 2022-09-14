#include<stdio.h>

void main()
{
    int arr[50][50], i, j, n, sum=0,a;
    printf("Enter the dimention of matrix: ");
    scanf("%d",&n);
    a=(n/2);
    if(n>0 && n%2!=0)
    {
        printf("Enter your numbers: \n");
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            scanf("%d",&arr[i][j]);
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i==a || j==a)
                    sum=sum+arr[i][j];
                else if(i==0 && j<a)
                    sum=sum+arr[i][j];
                else if(i<a && j==n-1)
                    sum=sum+arr[i][j];
                else if(i>a || j==0)
                    sum=sum+arr[i][j];
                else if(i==n-1 && j>a)
                    sum=sum+arr[i][j];
                else
                    continue;
            }
        }
        printf("Summation: %d",sum);
    }
    else
        printf("Only odd integer is excepted..");
        
}