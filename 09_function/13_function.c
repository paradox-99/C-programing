#include<stdio.h>

int isPrime(int n);
int GeneratePrime(int n);

void main(){
    int n;
    scanf("%d",&n);
    GeneratePrime(n);
}
int GeneratePrime(int n){
    int i, count=0, num;
    for(i=1; ; i++)
    {
        num=isPrime(i);
        if(num==0)
            count++;
        if(count == n+1)
            break;
    }
    printf("Prime %d th is : %d",n,i);
}

int isPrime(int n){
    int i, f=0;
    if (n == 1 || n == 0)
        return 1;
    for (i = 2; i < n/2; i++)
    {
        if (n % i == 0)
           return 1;
    }
    return 0;
}