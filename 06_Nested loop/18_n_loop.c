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
                if(st==1 || st==n || row==(n/2)+1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    else
        printf("\n\nEven integer is not valid !!\nOnly odd integer is exceptable\n\n");
}