#include<stdio.h>

void main()
{
    int i,j,m,n,arr[10][10],num=0, a, b;
    printf("Enter row and coloum number: \n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements: ");
    for ( i = 0; i < m; i++)
    {
        for( j=0; j<n; j++)
            scanf("%d",&arr[i][j]);
    }
    for ( i = 0; i < m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(num< arr[i][j])
            {
                num=arr[i][j];
                a=i; b=j;
            }
        }
    }
    printf("\n\nMax number: %d\nLocation: [%d][%d]",num,a,b);
}