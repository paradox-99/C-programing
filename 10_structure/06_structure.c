#include<stdio.h>
#include<math.h>

struct comp
{
    float r,i;
};

void main()
{
    struct comp pri;
    float arg,mod;
    printf("Enter the real and imagine number: ");
    scanf("%f%f", &pri.r, &pri.i);
    mod = sqrt((pri.r*pri.r)+(pri.i*pri.i));
    arg = tan(pri.r/pri.i);
    printf("Modulus: %.2f \nArguments: %.2f", mod,arg);
}