#include<stdio.h>
void main()
{
    int deg_1,deg_2,deg_3;
    printf("Enter the degree value = ");
    scanf("%d%d%d",&deg_1,&deg_2,&deg_3);
    if (deg_1<=0 || deg_2<=0 || deg_3<=0)
        printf("No");
    else if (deg_1+deg_2+deg_3==180)
        printf("Yes");
    else if(deg_1+deg_2+deg_3>180)
        printf("No");
    else
        printf("No");
}