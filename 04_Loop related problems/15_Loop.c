#include<stdio.h>

void main()
{
    int x,y,i,result=1;
    printf("Enter the value of x and y = ");
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
        result=result*x;
    }
    printf("Result= %d",result);
}