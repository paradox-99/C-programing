#include<stdio.h>

void main()
{
    int i,j,n,num;
    printf("Input: ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        num=i;
        for ( j = 1; j <= n; j++)
            printf("%d",num);
        printf("\n");
    }
}

        // another solution


    // #include<stdio.h>

    // void main()
    // {
    //     int i,j,n,p;
    //     printf("Input: ");
    //     scanf("%d",&n);
    //     for ( i = 1; i <= n; i++)
    //     {
    //         for ( j = 1,p=i; j <= n; j++,p++)
    //             printf("%d",p);
    //         printf("\n");
    //     }
    // }
