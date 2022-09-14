#include <stdio.h>

int inputmat(int a, int b, int arr[10][10]);
int showmat(int a, int b,int arr[10][10]);
int multimat(int a, int b, int arr[10][10]);

void main()
{
    int m, n;
    int arr[10][10];
    printf("Enter the value of row and column: ");
    scanf("%d%d", &m, &n);

    inputmat(m, n,arr);
    printf("\n\n");

    showmat(m, n,arr);
    printf("\n\n");

    multimat(m, n,arr);
}

int inputmat(int a, int b,int arr[10][10])
{
    int i, j;
    printf("Enter the matrix values: ");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
            scanf("%d", &arr[i][j]);
    }
}

int showmat(int a, int b,int arr[10][10])
{
    int i, j;
    printf("The matrix is: \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }
}

int multimat(int a, int b, int arr[10][10])
{
    int i, j;
    printf("The multiply matrix is: \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
            printf("%d\t", arr[i][j] * 2);
        printf("\n");
    }
}