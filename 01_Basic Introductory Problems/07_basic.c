#include<stdio.h>

int main()
{
    int int_num; float flt_num; char char_var;

    printf("Enter the integer number = ");
    scanf("%d",&int_num);

    printf("Enter the float number = ");
    scanf("%f",&flt_num);

    printf("Enter the character value = ");
    //fflush(stdin);
    scanf(" %c",&char_var);

    printf("\n\nThe Integer value = %d \n",int_num);
    printf("The Floating value = %f \n",flt_num);
    printf("The Character value = %c",char_var);

    return 0;
}