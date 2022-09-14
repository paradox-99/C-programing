#include<stdio.h>

int mini(int a)
{
    int arr[100], i, min;
    printf("Enter the values: ");
    for ( i = 0; i < a; i++)
        scanf("%d", &arr[i]);
    min=arr[0];
    for ( i = 0; i < a; i++)
    {
        if (min>arr[i])
            min=arr[i];
    }
    return min;
}

void main()
{
    int n,x;
    printf("How many numbers: ");
    scanf("%d", &n);
    x = mini(n);
    printf("Minimum: %d", x);
}