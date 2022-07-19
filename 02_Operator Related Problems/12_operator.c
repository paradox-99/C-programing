#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float root1,root2;
    printf("Values are = ");
    scanf("%d%d%d",&a,&b,&c);
    root1=(-b + sqrt(b*b-4*a*c))/ (2*a);
    root2=(-b - sqrt(b*b-4*a*c))/ (2*a);
    printf("Root = %.2f \t %.2f",root1,root2);
}