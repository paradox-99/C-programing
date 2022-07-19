#include<stdio.h>
void main()
{
    float num_1,num_2,add,sub,multi,div,rem;
    printf("Enter the value of Number_1 and Number_2 = ");
    scanf("%f%f",&num_1,&num_2);
    add=num_1+num_2;   sub=num_1-num_2;
    multi=num_1*num_2;  div=num_1/num_2;
    printf("Addition=%.2f \n",add);
    printf("Subtraction=%.2f \n",sub);
    printf("Multiplication=%.2f \n",multi);
    printf("Division=%.2f \n",div);
}