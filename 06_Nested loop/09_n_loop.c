#include<stdio.h>

void main()
{
    int row,i,j;
    printf("Enter row: ");
    scanf("%d",&row);
    for ( i = 1; i <= row; i++)
    {
        if (i%2!=0)
        {
            for (j = 1; j <= row; j++)
            {
                if(j%2==0)
                    printf("0");
                else
                    printf("1");
            }
        }
        else
        {
            for (j = 1; j <= row; j++)
            {
                if(j%2==0)
                    printf("1");
                else
                    printf("0");
            }
        }
        printf("\n");
    }
    
}