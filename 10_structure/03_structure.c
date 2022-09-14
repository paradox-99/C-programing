#include<stdio.h>
#include<math.h>

struct coordinates
{
    int x1,y1;
    int x2,y2;
};

void main()
{
    struct coordinates calc;
    float sum=0;
    printf("Enter the 1st coordinates- \n");
    scanf("%d%d",&calc.x1,&calc.y1);
    printf("Enter the 2nd coordinates- \n");
    scanf("%d%d",&calc.x2,&calc.y2);
    sum = sqrt(pow((calc.x1-calc.x2),2)+pow((calc.y1-calc.y2),2));
    printf("The distance is %.2f unit",sum);
}