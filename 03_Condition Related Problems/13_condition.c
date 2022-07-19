#include<stdio.h>

void main()
{
    int Choice,Case; float a,b;
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
            printf("\n1: Quotient");
            printf("\n2: Reminder");
            printf("\nEnter your Choice: ");
            scanf("%d",&Case);
            switch (Case)
            {
            case 1:
                printf("\nQuotient: %.3f",a/b);
                break;
            case 2:
                printf("\nReminder: %.3f",(int)a%(int)b);
                break;
            default:
                printf("\nInvalid Input");
                break;
            }
        break;
    default:
        printf("\nInvalid Input");
        break;
    }
}