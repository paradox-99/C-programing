#include<stdio.h>
void main()
{
    int x,y,a;
    printf("Enter the value = ");
    scanf("%d%d",&x,&y);
    a=x; 
    a += y;
    x -= y;
    printf("Increment value = %d",a);
    printf("\n Decrement value = %d",x);
}