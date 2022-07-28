#include <stdio.h>  
void main()
{  
    int n,row,spaces,star,a;  
    printf("Enter the number of rows: ");  
    scanf("%d",&n);
    a=(n/2)+1;
    for(row=1;row<=a;row++)  
    {  
        for ( spaces = 1; spaces <= (a-row); spaces++)
            printf("_");
        for ( star = 1; star <= (row*2)-1; star++)
            printf("*");
        printf("\n");
    }

    int b=n/2;
    for ( row = 1; row <=b; row++)
    {
        for (spaces = 1; spaces <=row ; spaces++)
            printf("_");
        for(star=row;star<b;star++)
            printf("*");
        for (star = row; star <= b; star++)
            printf("*");
        printf("\n");
    }
}