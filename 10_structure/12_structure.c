#include<stdio.h>

struct time
{
      int hour;
      int min;
      int sec;
};

void main()
{
      struct time count;
      int rem,a;
      printf("Enter hour: ");
      scanf("%d",&count.hour);
      printf("Enter minutes: ");
      scanf("%d",&count.min);
      a=count.min;
      printf("Enter second: ");
      scanf("%d",&count.sec);
      if (count.sec>=30)
            count.min=count.min+1;
      rem = (count.min*100)/60;
      printf("Time interval in hour: %d.%d",count.hour,rem);
      rem = (count.sec*100)/60;
      printf("\nTime interval in minute: %d.%d",((count.hour*60)+a),rem);
      printf("\nTime interval in second: %d",((count.hour*60*60)+(a*60)+count.sec));
}