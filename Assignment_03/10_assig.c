#include<stdio.h>

int GCD(int m, int n);
int LCM(int m, int n);

void main()
{
    int num1, num2, gcd, lcm;
    printf("Enter the numbers: ");
    scanf("%d%d",&num1,&num2);
    gcd = GCD(num1,num2);
    lcm = LCM(num1,num2);
    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);
}

int GCD(int m, int n)
{
    int x,i=0;    
    while (1)
    {
        x=m%n;
        if (m%n ==0 )
            break;
        m=n;
        n=x;
        i++;
    }
    return n;
}

int LCM(int m, int n)
{
    int x,i;
    x=(m>n) ? m:n;
    i=0;
    while (1)
    {
        if(x%m==0 && x%n==0)
            break;
        ++x;
        i++;
    }
    return x;
}