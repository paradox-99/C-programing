#include<stdio.h>

int val(int a, int arr[100]);

void main()
{
    int n,i,x,arr[100];
    printf("How many numbers: ");
    scanf("%d", &n);
    x = val(n,arr);
    printf("Output: ");
    for ( i = 0; i < n; i++)
        printf(" %d\t",arr[i]);
}

int val(int a, int arr[100])
{
    int i;
    printf("Enter the numbers: ");
    for ( i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
        arr[i]*=2;
    }
}