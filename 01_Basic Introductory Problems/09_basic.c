#include<stdio.h>
#include<stdbool.h>

int main()
{
    double d_number = 3.14;
    printf("The value = %lf",d_number);
    bool x=true;
    if(x==true)
        printf("\nThe boolen value: 1");
    else if(x==false)
        printf("\n\nThe boolen value: 0");
    else
        printf("Wrong input");
    return 0;
}