#include<stdio.h>

void main()
{
    char cat; int years, num_fam; float tot_income; 
    printf("Enter your category: ");
    scanf("%c",&cat);
    printf("Enter year of work experience: ");
    scanf("%d",&years);
    printf("Numbers of family members: ");
    scanf("%d",&num_fam);
    printf("Total family income per month: ");
    scanf("%f",&tot_income);
    if(years>=12 && num_fam>5 || tot_income<1100.78)
    {
        switch (cat)
        {
        case 'X':
            if (num_fam>6 && tot_income<1000.50)
                printf(" You are eligable.");
            else
                printf("You are not eligable.");
            break;
        case 'Y':
            if(num_fam > 8 && tot_income < 1100.78)
                printf("You are eligable.");
            else
                printf("You are not eligable.");
            break;
        case 'Z':
            if(num_fam > 8 && tot_income < 1100.78)
                printf("You are eligable.");
            else
                printf("You are not eligable.");
            break;
        default:
            printf("Wrong Input.");
            break;
        }
    }
    else
    {
        printf("\n\nThis bonus is only for those people who have more than or equal 12 years of work experience and more than 5 family members or Total family income should be less than 1000.50 BDT.\n\n");
    }
}