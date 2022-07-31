#include<stdio.h>

void main()
{
    int A[50],B[50],i,j,n_1,n_2,p=0,q=0;
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
    while(p<=n_1 && q<=n_2)
    {
        if(A[p]<B[q])
            p++;
        else if(A[p]>B[q])
            q++;
        else if(A[p]==B[q])
        {
            printf("%d",A[p]);
            p++; q++; 
        }
    }
    
}