#include<stdio.h>

void main()
{
    float pi=3.1416, radius, area;
    printf("Enter the radius = ");
    scanf("%f",&radius);
    area = 2*pi*radius;
    printf("The area of the circle is = %.3f",area);

}