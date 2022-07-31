#include<stdio.h>

void main()
{
    int arr_1[100],arr_2[100],n,i,j,sum;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter first array...");
    for ( i=0; i<n; i++)
        scanf("%d",&arr_1[i]);
    printf("Enter second array...");
    for ( j=0; j<n; j++)
        scanf("%d",&arr_2[j]);
    for(i=0,j=0; i<n,j<n; i++,j++)
    {
        sum=arr_1[i]+arr_2[j];
        printf("%d\t",sum);
    }
}