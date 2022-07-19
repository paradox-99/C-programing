#include<stdio.h>

void main()
{
    int number;
    printf("Input the number: ");
    scanf("%d",&number);
    if (number==0)
        printf("Zero");
    else if(number==1)
        printf("One");
    else if(number==2)
        printf("Two");
    else if(number==3)
        printf("Three");
    else if(number==4)
        printf("Four");
    else if(number==5)
        printf("Five");
    else if(number==6)
        printf("Six");
    else if(number==7)
        printf("Seven");
    else if(number==8)
        printf("Eight");
    else if(number==9)
        printf("Nine");
    else
        printf("Wrong Input");
}