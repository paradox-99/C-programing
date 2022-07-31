#include<stdio.h>

void main()
{
    int A[50],B[50],C[50],i,n_1,n_2;
    printf("How many numbers in array A: ");
    scanf("%d",&n_1);
    printf("Enter the numbers: ");
    for(i = 0; i < n_1; i++)
        scanf("%d",&A[i]);
    printf("How many numbers in array B: ");
    scanf("%d",&n_2); 
    printf("Enter the numbers: ");
    for(i=0; i<n_2; i++)
        scanf("%d",&B[i]);
    for(i=0; i<n_1; i++)
    {
        C[i]=A[i];
        A[i]=B[i];
        B[i]=C[i];
    }
    printf("Array A: ");
    for(i=0; i<n_2; i++)
        printf("%d\t",A[i]);
    printf("\n");
    printf("Array B: ");
    for(i=0; i<n_1;i++)
        printf("%d\t",B[i]);
}