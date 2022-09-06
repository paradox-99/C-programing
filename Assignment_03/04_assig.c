#include<stdio.h>

struct multi
{
    int arr[100];
};

struct multi val(int a);

void main()
{
    struct multi x;
    int n,i;
    printf("How many numbers: ");
    scanf("%d", &n);
    x = val(n);
    printf("Output: ");
    for ( i = 0; i < n; i++)
    {
        printf(" %d\t", x.arr[i]);
    }
}

struct multi val(int a)
{
    struct multi p;
    int i;
    printf("Enter the numbers: ");
    for ( i = 0; i < a; i++)
    {
        scanf("%d", &p.arr[i]);
        p.arr[i]*=2;
    }
    return p;
}