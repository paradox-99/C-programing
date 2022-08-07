#include<stdio.h>

void main()
{
    int i,j,m,n,arr_1[10][10], arr_2[10][10],num=0, a=0, b;
    printf("Enter row and coloum number: \n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements: ");
    for ( i = 0; i < m; i++)
    {
        for( j=0; j<n; j++)
            scanf("%d",&arr_1[i][j]);
    }
    for(i=0; i<m; i++)
    {
        b=0;
        for(j=n-1; j>=0; j--)
        {
            arr_2[a][b]==arr_1[i][j];
            b++;
        }
        a++;
    }
    printf("Reverse matrix: \n");
    for ( i = 0; i < a; i++)
    {
        for( j=0; j<b; j++)
        {
            printf("%d\t",arr_2[i][j]);
        }
        printf("\n");
    }
}