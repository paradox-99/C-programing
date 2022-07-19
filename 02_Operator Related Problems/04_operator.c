#include<stdio.h>

void main()
{
    int Number,a,b,c,d;
    printf("Enter the number = ");
    scanf("%d",&Number);
    a=Number; b=Number; c=Number; d=Number;
    printf("\ni++ : %d",a++);
    printf("\n++i : %d",++b);
    printf("\ni-- : %d",c--);
    printf("\n--i : %d",--d);
}