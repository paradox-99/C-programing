#include<stdio.h>

int isPrime(int n);
int GeneratePrime(int n);

void main(){
    int n;
    scanf("%d",&n);
    GeneratePrime(n);
}
int GeneratePrime(int n){
    int i ,num;

    printf("Prime less than %d :",n);
    for(i=1;i<n;i++){
        if( isPrime(i)==0)
        printf(" %d,",i);
    }
}

int isPrime(int n){
    int i, f=0;

    if (n == 1 || n == 0)
        return 1;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 1;
    }
    return 0;
}