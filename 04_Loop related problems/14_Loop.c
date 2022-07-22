#include<stdio.h>

void main()
{
    int i,n,r,n_f=1,r_f=1,n_r=1,com=0;
    printf("Enter the of n and r = ");
    scanf("%d%d",&n,&r);
    for(i=1;i<= n;i++)
        n_f=n_f*i;
    for(i=1;i<=r;i++)
        r_f=r_f*i;
    for(i=1;i<=(n-r);i++)
        n_r=n_r*i;
    com=n_f/(r_f*n_r);
    printf("\n%dC%d = %d",n,r,com);
}