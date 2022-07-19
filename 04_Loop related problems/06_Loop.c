#include<stdio.h>
void main()
{
    int a,n,i,try;
    printf("How many turn do you want to give= ");      
    scanf("%d",&try);
    printf("\nPlayer_1 please input your number...");
    scanf("%d",&a);
    printf("\n\nIt's time to check who wins!!! \n\n");
    for ( i = 1; i <= try; i++)
    {
        printf("\n\nPlayer 2 input your number = ");
        scanf("%d",&n);
        if(a==n)
        {
            printf("Right, Player 2 wins!");
            break;
        }
        else
        {
            printf("Wrong, %d Chance(s) Left!",try-i);
            if (try-i==0)
                printf("\n\n\tPlayer-1 wins!");
        }
    }
}