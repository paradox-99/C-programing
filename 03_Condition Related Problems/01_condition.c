#include<stdio.h>

void main()
{
    float number;
    printf("Input the number = ");
    scanf("%f",&number);
    if (number>=0)
        printf("Positive");
    else
        printf("Negative");
}