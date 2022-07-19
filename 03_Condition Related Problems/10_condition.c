#include<stdio.h>
void main()
{
    float number_1,number_2; char operator;
    printf("Enter the number: ");
    scanf("%f",&number_1);
    fflush(stdin);
    scanf("%c",&operator);
    scanf("%f",&number_2);
    if(operator=='+')
        printf("\nAddition = %.3f",number_1+number_2);
    else if(operator=='-')
        printf("\nSubtraction = %.3f",number_1-number_2);
    else if(operator=='*')
        printf("\nMultiplication = %.3f",number_1*number_2);
    else if(operator=='/')
        if (number_2==0)
            printf("\nDivision = Zero as divisor is not valid!");
        else
            printf("\nDivision = %.3f",number_1/number_2);
    else
        printf("Invalid input");
}