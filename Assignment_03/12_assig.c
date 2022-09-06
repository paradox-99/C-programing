#include<stdio.h>

struct player
{
    char Name[30];
    char Country[20];
    int Runs[3];
    int wickets[3];
    int points[3];
};

struct player input_information();
struct player process_points();
struct player decision();

struct player take_info[2];

void main()
{
    input_information();
    process_points();
    decision();
}

struct player input_information()
{ 
    int i,j;
    for ( i = 0; i < 2; i++)
    {
        printf("Enter player %d information: \n", i+1);
        printf("Name: "); 
        fflush(stdin);
        gets(take_info[i].Name);
        printf("Enter country name: ");
        fflush(stdin);
        gets(take_info[i].Country);
        printf("Enter the runs of the matches: ");
        for ( j = 0; j < 3; j++)
            scanf("%d",&take_info[i].Runs[j]);
        printf("Enter the wickets of the matches: ");
        for ( j = 0; j < 3; j++)
            scanf("%d",&take_info[i].wickets[j]);
        printf("\n\n");
    }
}

struct player process_points()
{
    int i,j;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (take_info[i].Runs[j] < 0)
                printf("Negative runs is invalid");
            else if (take_info[i].Runs[j] <= 25)
                take_info[i].points[j] += 5;
            else if (take_info[i].Runs[j] > 25 && take_info[i].Runs[j] <= 50)
                take_info[i].points[j] += 10;
            else if (take_info[i].Runs[j] > 50 && take_info[i].Runs[j] <= 75)
                take_info[i].points[j] += 15;
            else if (take_info[i].Runs[j] > 75)
                take_info[i].points[j] += 20;
            if (take_info[i].wickets[j] < 0)
                printf("Wickets cannot be Negative.");
            else if (take_info[i].wickets[j] >= 1)
                take_info[i].points[j] += (12 * take_info[i].wickets[j]);
        }
    }
}

struct player decision()
{
    int i,j,sum[2],a[2];
    for ( i = 0; i < 3; i++)
    {
        printf("Match %d:\n",i+1);
        for (j = 0; j < 2; j++)
        {
            printf("%s points",take_info[j].Name);
            printf(": %d\n",take_info[j].points[i]);
            a[j]=take_info[j].points[i];
        }
        if(a[0] > a[1])
            printf("MOM: %s",take_info[0].Name);
        else
            printf("MOM: %s",take_info[1].Name);
        printf("\n\n");
    }
    for ( i = 0; i < 2; i++)
    {
        for ( i = 0; i < 3; i++)
            sum[i] += take_info[i].points[j];
    }
    if (sum[0] > sum[1])
        printf("Man of the series: %s",take_info[0].Name);
    else
        printf("Man of the series: %s",take_info[1].Name);
    printf("\n\n\n");
}