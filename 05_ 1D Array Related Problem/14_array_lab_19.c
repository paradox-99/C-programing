#include<stdio.h>

void main()
{
    int A[50],B[50],i,j,n_1,n_2,p=0,c[50];
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
        for(j=0; j<n_2; j++)
        {
            if(A[i]==B[j])
            {
                c[p]=A[i];
                p++;
            }
        }
    }
    if(p>0)
    {
        printf("Intersection: ");
        for ( i = 0; i < p; i++)
            printf("%d\t",c[i]);
    }
    else
        printf("Empty set..");
}