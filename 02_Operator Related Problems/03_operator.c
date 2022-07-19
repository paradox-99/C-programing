#include<stdio.h>
void main()
{
    float num_1,num_2,cal;
    printf("Enter the value = ");
    scanf("%f%f",&num_1,&num_2);
    cal=(3.31*num_1*num_1+2.01*num_2*num_2*num_2)/(7.16*num_2*num_2+2.01*num_1*num_1*num_1);
    printf("The value of cal = %f",cal);

}