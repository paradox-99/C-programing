#include<stdio.h>

void main()
{
    int a[15][15],n,row,col;
    printf("Enter the size of matrix: ");
    scanf("%d",&n);
    printf("Enter the elements of martix: ");
    for ( row = 0; row < n; row++)
    {
        for(col=0; col<n; col++)
            scanf("%d",&a[row][col]);
    }
    printf("\n\n");
    for ( row = 0; row < n; row++)
    {
        for(col=0; col<n; col++)
            printf("%d\t",a[row][col]);
        printf("\n");
    }
    printf("Major diagonal: ");
    for ( row = 0; row < n; row++)
    {
        for(col=0; col<n; col++)
        {
            if(row==col)
                printf("%d",a[row][col]);
        }
    }
    printf("\n");
    printf("Minor diagonal: ");
    for ( row = 0; row < n; row++)
    {
        for(col=0; col<n; col++)
        {
            if(col==(n-1)-row)
                printf("%d",a[row][col]);
        }
    }
}