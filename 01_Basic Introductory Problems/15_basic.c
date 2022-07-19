#include<stdio.h>
int main()
{
    float Flt_number;
    printf("Enter the number = ");
    scanf("%f",&Flt_number);
    printf("Val = %10f \n",Flt_number);
    printf("Val = %2f \n",Flt_number);
    printf("Val = %.2f \n",Flt_number);
    printf("Val = %.0f \n",Flt_number);
    printf("val = %e",Flt_number);
    return 0;
}