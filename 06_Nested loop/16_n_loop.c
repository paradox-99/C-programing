#include<stdio.h>

void main()
{
    int row, st, sp, n;
    printf("Enter row: ");
    scanf("%d",&n);
    if(n%2!=0)
    {
        for ( row = 1; row <= n; row++)
        {
            for(st=1; st<= n; st++)
            {
                if(row==st || st==(n-row+1))
                {
                    printf("*");
                }
                else
                    printf("_");
            }
            printf("\n");
        }
    }
    else
        printf("\n\nEven integer is not valid !!\nOnly odd integer is exceptable\n\n");
}