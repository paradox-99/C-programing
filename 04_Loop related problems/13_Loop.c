#include<stdio.h>
void main()
{
    int i,n,f;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    i=1;
    f=1;
    while (i<= n)
    {
        f=f*i;
        printf("%d",f);
        i++;
    }
    printf("\n%d! = %d",n,f);
}