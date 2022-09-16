#include <stdio.h>

struct time {
   int sec;
   int min;
   int hours;
};

int main()
{
      struct time st_Time, sp_Time, diff;
      printf("Enter the last time. \n");
      printf("Enter hours, minutes and seconds: ");
      scanf("%d %d %d", &st_Time.hours,&st_Time.min,&st_Time.sec);
      printf("Enter the previous time. \n");
      printf("Enter hours, minutes and sec: ");
      scanf("%d %d %d", &sp_Time.hours,&sp_Time.min,&sp_Time.sec);
      while (sp_Time.sec > st_Time.sec)
      {
            --st_Time.min;
            st_Time.sec += 60;
      }
      diff.sec = st_Time.sec - sp_Time.sec;
      while (sp_Time.min > st_Time.min) {
            --st_Time.hours;
            st_Time.min += 60;
      }
      diff.min = st_Time.min - sp_Time.min;
      diff.hours = st_Time.hours - sp_Time.hours;
      printf("Difference: %d:%d:%d\n", diff.hours,diff.min,diff.sec);
}