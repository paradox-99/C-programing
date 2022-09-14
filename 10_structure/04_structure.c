#include<stdio.h>
#include<math.h>

struct coordinates
{
    int x[3];
    int y[3];
    float area;
};

struct coordinates trg;
struct coordinates trig_check();

void main()
{
    int i;
    printf("Enter the values of 'x' axis: ");
    for ( i = 0; i < 3; i++)
        scanf("%d",&trg.x[i]);
    printf("Enter the values of 'y' axis: ");
    for ( i = 0; i < 3; i++)
        scanf("%d",&trg.y[i]);
    trig_check();
}

struct coordinates trig_check()
{
    int a;
    a = ((trg.x[0]-trg.x[1])*(trg.y[1]-trg.y[2])-(trg.y[0]-trg.y[1])*(trg.x[1]-trg.x[2]));
    trg.area = 0.5 * abs(a);
    if (trg.area > 0)
        printf("The area is %.2f unit",trg.area);
    else
        printf("They are in the same line.");
}