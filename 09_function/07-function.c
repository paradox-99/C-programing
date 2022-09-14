#include<stdio.h>

void even()
{
    int i,count,num[100],n;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for ( i = 0; i < n; i++)
        scanf("%d",&num[i]);
    printf("The even numbers are: ");
    for ( i = 0; i < n; i++)
    {
        if (num[i]%2==0)
            printf("%d\t",num[i]);    
    }
}

void main()
{
    even();
}