#include<stdio.h>
void main()
{
    int year;
    printf("Enter the numbers = ");
    scanf("%d",&year);
    if (year %4 == 0 && year % 100 != 0 || year%400 ==0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not leap year");
    }
}