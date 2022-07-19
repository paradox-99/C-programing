#include<stdio.h>
#include<math.h>
void main()
{
    int x;
    float output,m;
    printf("Input x: ");
    scanf("%d",&x);
    m=(x*3.1416)/180;
    x=m;
    output=(2*cos(x)*cos(x))-(sqrt(3)*sin(x))+sin(x/2);
    printf("Value = %.3f",output);
}