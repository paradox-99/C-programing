#include<stdio.h>

void main()
{
    float X,Y;
    printf("Enter the number = ");
    scanf("%f%f",&X,&Y);
    if(X>Y)
        printf("%f is greater than %f",X,Y);
    else if(X<Y)
        printf("%f is less than %f",X,Y);
    else
        printf("%f is equal to %f",X,Y);
}