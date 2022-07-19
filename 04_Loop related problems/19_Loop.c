#include<stdio.h>
#include<math.h>
void main()
{
    int x,i,j,fac=1,n=1; float sum=0;
    printf("\nEnter the value= ");
    scanf("%d",&x);
    for (i=1;i<=2;i++)
    {
        for(j=1;j<=x;j=j+1)
            fac=fac*j;
        if (i%2==0)
            sum=sum-(pow(x,j)/fac);
        else
            sum=sum+(pow(x,j)/fac);
    }
    printf("\nvalue = %.3f\n\n",sum);
}