#include <stdio.h>

int checkPrimeNumber(int n);

void main() {

    int n, flag;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    flag = checkPrimeNumber(n);
    if(flag == 1)
        printf("%d is not a prime number",n);
    else
        printf("%d is a prime number",n);
}

int checkPrimeNumber(int n)
{
    int i;
    if (n == 0 || n == 1)
        return 1;
    for(i=2; i <= n/2; ++i) 
    {
        if(n%i == 0)
        return 1;
    }
    return 0;
}
