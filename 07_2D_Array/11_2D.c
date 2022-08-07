#include<stdio.h>

void main()
{
    int arr[50][50], i, j, n, sum=0,a;
    printf("Enter the dimention of matrix: ");
    scanf("%d",&n);
    if(n>0 && n%2!=0)
    {
        printf("Enter your numbers: \n");
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            scanf("%d",&arr[i][j]);
        }
        a=n/2;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i%2 != 0)
                    sum=sum+arr[i][j];
                else if(i%2 == 0 && j%2 != 0)
                    sum=sum+arr[i][j];
            }
        }
        printf("Summation: %d",sum);
    }
    else
        printf("Only odd integer is exepted..");
}