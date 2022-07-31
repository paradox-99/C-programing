#include<stdio.h>

void main()
{
    int term,arry[100],pos,i,found,flag=0;
    printf("How many integers: ");
    scanf("%d",&term);
    printf("Enter the numbers: ");
    for ( i = 0; i < term; i++)
    {
        scanf("%d",&arry[i]);
    }
    printf("Founding number: ");
    scanf("%d",&found);
    for ( i = 0; i < term; i++)
    {
        if (found == arry[i])
        {
            flag=1;
            printf("FOUND at index position:%d \n",i);
        }
    }
    if(flag==0)
         printf("NOT FOUND");
}