#include<stdio.h>
void main()
{
    int n,x;
    printf("Enter the number = ");
    scanf("%d",&n);
    while(n>0)
    {
        x=n%10;
        printf("%d",x);
        n=n/10;
    }
}