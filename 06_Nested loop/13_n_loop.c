#include<stdio.h>

void main()
{
    int row,st_1,st_2,sp_1,sp_2;
    int n,a; printf("Enter row: ") ;scanf("%d",&n);
    for ( row = 1; row <= n; row++)
    {
        for(st_1=1; st_1<= row; st_1++)
            printf("%d",st_1);
        for(sp_1=row; sp_1<=n-1; sp_1++)
            printf("_");
        for(sp_2=row; sp_2<=n-2; sp_2++)
            printf("_");
        for(st_2=row; st_2>=1; st_2--)
        {
            if(st_2==n)
            {
                st_2=st_2-1;
                printf("%d",st_2);
            }
            else
                printf("%d",st_2);
        }
        printf("\n");
    }
}