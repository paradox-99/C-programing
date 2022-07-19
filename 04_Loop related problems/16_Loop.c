#include<stdio.h>

void main()
{
    int num_1,num_2,x,a,b;
    printf("Enter the numbers: ");
    scanf("%d%d",&num_1,&num_2);
    a=num_1; b=num_2;
    while (num_1 % num_2!=0)
    {
        x=num_1%num_2;
        num_1=num_2;
        num_2=x;
    }
    printf("GCD = %d",num_2);

    num_1=a;
    num_2=b;
    x=(num_1>num_2) ? num_1:num_2;
    while (1)
    {
        if(x%num_1==0 && x%num_2==0)
        {
            printf("\nLCM = %d",x);
            break;
        }
        ++x;
    }
}