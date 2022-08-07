#include<stdio.h>

void main()
{
    int arr[15][15],m,n,i,j,x,y;
    printf("How many numbers: ");
    scanf("%d%d",&m,&n);
    printf("Enter the numbers: ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        scanf("%d",&arr[i][j]);
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            for(x=0; x<m; x++)
            {
                for(y=0; y<n; y++)
                {
                    if(i==x && j==y)
                        continue;
                    else if(arr[x][y]==arr[i][j])
                    {
                        arr[x][y]=-1;
                    }
                }
            }
        }
    }
    printf("New array elements: \n");
    for ( i = 0; i < m; i++)
    {
        for(j=0; j<n; j++)
            printf("%d\t",arr[i][j]);
        printf("\n");
    }
}