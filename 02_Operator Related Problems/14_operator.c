#include<stdio.h>
#include<math.h>
void main()
{
    float x,a,b,c;
    printf("Enter the value of = ");
    scanf("%f",&x);
    a=ceil(x);
    b=floor(x);
    c=fabs(x);
    printf("\nA = %d, B = %d, C = %.1f",(int)a,(int)b,c);
}