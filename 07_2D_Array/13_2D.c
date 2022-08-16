#include<stdio.h>

void main()
{
    int a[15][15],b[15][15],i,j,n,flag;
    printf("Enter the number of row and column: \n");
    scanf("%d",&n);
    printf("Enter the values: ");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
            scanf("%d",&a[i][j]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
            b[i][j]=a[j][i];
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            flag=0;
            if(a[i][j]!=b[i][j])
            {
                flag=2;
            }
            else
                flag=1;
        } 
        if(flag==2)
        {
            printf("\n\nNo");
            break;
        }
    }
    if(flag==1)
        printf("Yes");
}