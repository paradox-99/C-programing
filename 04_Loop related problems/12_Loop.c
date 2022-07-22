#include<stdio.h>
void main()
{
    int i,term, n_1=1,n_2=1,n_3;
    printf("How many terms = ");
    scanf("%d",&term);
    printf("%d,%d,",n_1,n_2);
    for ( i = 3; i <= term; i++)
    {
        n_3=n_1+n_2;
        printf("%d",n_3);
        n_1=n_2;
        n_2=n_3;
        if(i==term)
            break;
        printf(",");
    } 
}