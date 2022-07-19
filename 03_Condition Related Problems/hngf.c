#include<stdio.h>

void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if (num>0)
    {
        if((num!=0)&&((num&(num-1))==0))
            printf("yes");
        else
            printf("no");
    }
}