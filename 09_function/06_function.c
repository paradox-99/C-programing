#include<stdio.h>

void swap(int *a, int *b);

void main()
{
    int a,b;
    printf("Enter the values: ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("\nValue in main: %d\t%d",a,b);
}

void swap(int *a, int *b)
{
    int x;
    x=*a;
    *a=*b;
    *b=x;
    printf("Value in function: %d\t%d",*a,*b);
}