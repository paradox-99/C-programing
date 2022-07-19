#include<stdio.h>
void main()
{
    int X,Y,a;
    printf("Enter the value of X and Y = ");
    scanf("%d%d",&X,&Y);
    a=X;
    a *=Y;
    printf("Multification = %d",a);
    X /=Y;
    printf("\nDivision = %d",X);
}