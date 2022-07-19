#include<stdio.h>
void main()
{
    int n,i,s,flag=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n==1 || n==0)
        flag=1;

    for (i=2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("\n%d is prime number\n\n",n);
    else
        printf("\n%d is not prime number.\n\n",n);
}
    