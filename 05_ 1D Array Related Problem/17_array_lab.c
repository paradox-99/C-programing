#include<stdio.h>

void main()
{
    int arr[100],n,i,j,temp;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted ascending array: ");
    for(i=0; i<n; i++)
        printf("%d\t",arr[i]);
}