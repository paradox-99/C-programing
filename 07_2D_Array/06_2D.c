#include<stdio.h>

void main()
{
    int A[15][15], B[15][15], C[15][15], i, j, r, col;
    printf("Enter the number of row and column: \n");
    scanf("%d%d",&r,&col);
    printf("Enter the 1st matrix values: ");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < col; j++)
            scanf("%d",&A[i][j]);
    }
    printf("\n\nEnter the 2nd matrix values: ");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < col; j++)
            scanf("%d",&B[i][j]);
    }
    
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < col; j++)
            C[i][j]=A[i][j] + B[i][j];
    }

    printf("Summation  of two matrix: \n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < col; j++)
            printf("%d\t",C[i][j]);
        printf("\n");
    }
}