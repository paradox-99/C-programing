#include<stdio.h>

void main()
{
    int arr[15][15],i,j,r,c;
    printf("Enter the number of row and column: \n");
    scanf("%d%d",&r,&c);
    printf("Enter the values: ");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
            scanf("%d",&arr[i][j]);
    }
    printf("Row-wise: ");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
            printf("%d\t",arr[i][j]);
    }
    printf("\n\nColumn-wise: ");
    for ( j = 0; j < c; j++)
    {
        for ( i = 0; i < r; i++)
            printf("%d\t",arr[i][j]);
    }
}