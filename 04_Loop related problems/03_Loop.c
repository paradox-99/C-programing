#include<stdio.h>
void main()
{
    int i, n, sum;
    printf("Enter the value = ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        if (i%2==0)
            printf("0");
        else if (i%2 != 0)
            printf("1");
        if (i==n)
        break;
        printf(",");
    }
}