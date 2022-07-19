#include<stdio.h>
void main()
{
    int a,b,c,X,Y,Z;
    printf("Input the value of a,b and c = ");
    scanf("%d%d%d",&a,&b,&c);
    X=a-b/3+c*2-1;
    Y=a-(b/(3+c)*2)-1;
    Z=a-((b/3)+c*2)-1;
    printf("\nX = %d",X);
    printf("\nY = %d",Y);
    printf("\nZ = %d",Z);
}