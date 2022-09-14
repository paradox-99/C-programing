#include<stdio.h>

struct comp
{
    float r,i;
};


void main()
{
    struct comp pri;
    printf("Enter the real and imagine number: ");
    scanf("%f%f", &pri.r, &pri.i);
    if (pri.i < 0)
        printf("%.2f%.2fi", pri.r, pri.i);
    else
        printf("%.2f + %.2fi", pri.r, pri.i);
}