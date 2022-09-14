#include<stdio.h>

int sum_arry(int arry[],int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        sum+=arry[i];
    }

    return sum;
}

void main(){
    
    int n, i,sum=0,arry[100];
    printf("Enter the arry size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arry[i]);
        sum+=arry[i];
    }
    
    printf("\nSum in function: %d",sum_arry(arry,n));
    printf("\nSum in main: %d",sum);
}