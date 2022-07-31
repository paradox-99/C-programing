#include<stdio.h>

void main()
{
    int A[100],B[100],n,i,j;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0; i<n; i++)
        scanf("%d",&A[i]);
    for(i=n-1, j=0; i>=0; i--, j++)
        B[j]=A[i];
    printf("Array A:");
    for(i=0; i<n; i++)
        printf(" %d\t",A[i]);
    printf("\nArray B:");
    for(j=0; j<n; j++)
        printf(" %d\t",B[j]);
}