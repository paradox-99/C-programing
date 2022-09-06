#include<stdio.h>

struct sort
{
    int arr[100];
};

struct sort val(int a);

void main()
{
    struct sort x;
    int n,i;
    printf("How many numbers: ");
    scanf("%d", &n);
    x = val(n);
    printf("Outout: ");
    for ( i = 0; i < n; i++)
    {
        printf(" %d\t", x.arr[i]);
    }
}

struct sort val(int a)
{
    struct sort p;
    int i,j,temp;
    printf("Enter the numbers: ");
    for ( i = 0; i < a; i++)
        scanf("%d", &p.arr[i]);
    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j<a; j++)
        {
            if (p.arr[j]>p.arr[i])
            {
                temp=p.arr[i];
                p.arr[i]=p.arr[j];
                p.arr[j]=temp;
            }
        }
    }
    return p;
}