#include<stdio.h>
#include<math.h>

struct num
{
    int arr[100];
    int n;
    float mean;
};

struct num Takeinput();
struct num CalcMean(struct num b, int e);
struct num Calc_std_deviation(struct num c, int f);

void main()
{
    struct num a_Input_ret, a_Mean, a_deviation;
    int x;
    a_Input_ret = Takeinput();
    x = a_Input_ret.n;
    a_Mean=CalcMean(a_Input_ret,x);
    a_deviation = Calc_std_deviation(a_Mean, x);
}

struct num Takeinput()
{
    struct num a;
    int i;
    printf("How many numbers: ");
    scanf("%d",&a.n);
    printf("Enter Input: ");
    for ( i = 0; i < a.n; i++)
        scanf("%d", &a.arr[i]);
    return a;
}

struct num CalcMean(struct num b, int e)
{
    int i,sum=0;
    for (i = 0; i < b.n; i++)
        sum += b.arr[i];
    b.mean = sum/e;
    return b;
}

struct num Calc_std_deviation(struct num c, int f)
{
    int i, sum=0; float dev=0;
    for ( i = 0; i < f; i++)
    {
        sum += pow((c.arr[i] - c.mean),2);
    }
    dev = sqrt(sum/f);
    printf("Results: %.2f", dev);
}