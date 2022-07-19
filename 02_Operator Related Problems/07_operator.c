#include<stdio.h>

void main()
{
    int number_1; float number_2;
    printf("Enter yours numbers = ");
    scanf("%d%f",&number_1,&number_2);
    printf("\nAssignment: %f assigned to an int produces %d",number_2,(int)number_2);
    printf("\nAssignment: %d assigned to a float  produces %f",number_1,(float)number_1);
    printf("\nType casting:(float) %d produces %f",number_1,(float)number_1);
    printf("\nType casting:(int) %.3f produces %d",number_2,(int)number_2);
}