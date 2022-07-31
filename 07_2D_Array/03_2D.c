#include<stdio.h>

void main()
{
    int arr[3][3],i,j,a,b,c,det;
    printf("Enter the values: ");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    a=arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1];
    b=arr[1][0]*arr[2][2] - arr[1][2]*arr[2][0];
    c=arr[1][0]*arr[2][1] - arr[1][1]*arr[2][0];
    det=arr[0][0]*a - arr[0][1]*b + arr[0][2]*c;

    printf("Determinant: %d",det);
}