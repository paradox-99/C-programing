#include<stdio.h>

int sumf=0;
int sum_func(int m){
        sumf+=m;
    return sumf;
}

void main(){
    
    int n, i,m,sumM=0;
    printf("Enter the arry size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&m);
        sum_func(m);
        sumM+=m;
    }
    printf("\nSum in function: %d",sumf);
    printf("\nSum in main: %d",sumM);
}