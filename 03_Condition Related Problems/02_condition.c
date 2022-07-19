#include<stdio.h>

void main()
{
    int number;
    printf("Input the number = ");
    scanf("%d",&number);
    if (number%2==0)
        printf("Even");
    else
        printf("Odd");
}