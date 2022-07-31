#include<stdio.h>

void main()
{
    int A[3][3], B[3][3], C[3][3], i, j, k,sum=0;
    printf("Enter the 1st matrix values: ");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
            scanf("%d",&A[i][j]);
    }
    printf("\n\nEnter the 2nd matrix values: ");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
            scanf("%d",&B[i][j]);
    }
    for ( j = 0; j < 3; j++)
    {
        for ( i = 0; i < 3; i++)
        {
            for(k=0; k<3; k++ )
                sum=sum + A[i][k]*B[k][j];
            C[i][j]=sum;
            sum=0;
        }
    }
    printf("After Multiplication: \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
            printf("%d\t",C[i][j]);
        printf("\n");
    }
}