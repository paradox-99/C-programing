#include<stdio.h>
void main()
{
    int player_1,player_2,a,b,try=3;
    printf("Player_1 please input your number: ");
    scanf("%d",&player_1);
    printf("It's time to check who wins!!! \n\n");
    printf("Player_2 please input your number: ");
    scanf("%d",&player_2);
    if (player_1 != player_2)
    {
        printf("\nWrong, %d Chance(s) left..",try-1);
        printf("\nEnter your next number: ");
        scanf("%d",&player_2);
        if(player_1 != player_2)
        {
            printf("Wrong, %d Chance(s) left..",try-2);
            printf("\nEnter your next number: ");
            scanf("%d",&player_2);
            if(player_1 != player_2)
            {
                printf("Player_1 Wins!!!");
            }
            else
            {
                printf("Right, Player_2 Wins!!!");
            }
        }
       else
       {
        printf("Right, Player_2 Wins!!!");
       }
    }
    else
    {
        printf("Right, Player_2 Wins!!!");
    }
}