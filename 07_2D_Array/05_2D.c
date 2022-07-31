#include<stdio.h>

void main()
{
    int a[15][15],n,row,col;
    printf("Enter the size of matrix: ");
    scanf("%d",&n);
    for ( row = 0; row < n; row++)
    {
        for(col=0; col<n; col++)
        {
            if(row==col)
                printf("1\t");
            else
                printf("0\t");
        }
        printf("\n");
    }
}