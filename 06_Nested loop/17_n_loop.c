// #include<stdio.h>

// void main()
// {
//     int row, st, sp, n;
//     printf("Enter row: ");
//     scanf("%d",&n);
//     if(n%2!=0)
//     {
//         for ( row = 1; row <= n; row++)
//         {
//             for(st=1; st<= n; st++)
//             {
//                 if(row==n/2+1 || st==n/2+1 || row+st==n/2 || row-st==n/2 || st-row==n/2 || row+st==(n/2)*3)
//                     printf("*");
//                 else
//                     printf(" ");
//             }
//             printf("\n");
//         }
//     }
//     else
//         printf("\n\nEven integer is not valid !!\nOnly odd integer is exceptable\n\n");
// }
#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);  // ‘n’ must be odd
    int num1 = n / 2 * 3;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
    // center horizontal, center vertical, upper left diagonal, bottom left diagonal, upper right diagonal, bottom right diagonal
            if(i == n / 2 || j == n / 2 || i + j == n / 2 || i - j == n / 2 || j - i == n / 2 || i + j == num1)
                printf("*");
            else
                printf("_");
        }
        printf("\n");
    }
    return 0;
}