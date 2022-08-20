#include<stdio.h>
void main()
{
    int row, star,space,n;
    printf("Enter row: ");
    scanf("%d",&n);
    for (  row= 1; row<= n; row++)
    {
        for ( space = 1; space <= (n-row); space++)
            printf(" ");
        for ( star = 1; star <= (row*2)-1; star++)
        {
            if(star==1)
                printf("1");
            else
            {
                if(star==(row*2)-1)
                    printf("%d",row);
                else
                    printf("*");
            }
        }
        printf("\n");
    }
}