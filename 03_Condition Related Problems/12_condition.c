#include<stdio.h>

void main()
{
    int Choice; float a,b;
    printf("Enter the numbers: ");
    scanf("%f%f",&a,&b);
    printf("\n1: Addition");
    printf("\n2: Subtraction");
    printf("\n3: Multiplication");
    printf("\n4: Division");
    printf("\nEnter your choice = ");  
    scanf("%d",&Choice);
    switch (Choice)
    {
    case 1:
        printf("\nAddition: %.3f",a+b);
        break;
    case 2:
        printf("\nSubtraction: %.3f",a-b);
        break;
    case 3:
        printf("\nMultiplication: %.3f",a*b);
        break;
    case 4:
        printf("\nQuotient: %.0f",a/b);
        break;
    default:
        printf("\nInvalid Input");
        break;
    }
}