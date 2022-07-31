#include<stdio.h>

void main()
{
    int arr[100],n,i,j,x;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                for(x=j; x<n-1; x++)
                    arr[x]=arr[x+1];
                n--;
                j--;
            }
        }
    }
    printf("New array elements: ");
    for ( i = 0; i < n; i++)
        printf("%d\t",arr[i]);
    
}