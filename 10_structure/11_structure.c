#include<stdio.h>

struct count
{
     int met[2], cen[2];
};

void main()
{
      struct count length;
      int i,sum=0,rem;
      for(i=0; i<2; i++)
      {
            printf("Enter length in meter: ");
            scanf("%d",&length.met[i]);
            printf("Enter length in centimeter: ");
            scanf("%d",&length.cen[i]);
      }
      sum = length.met[0]+length.met[1];
      if ((length.cen[0]+length.cen[1])>=100)
      {
            sum += ((length.cen[0]+length.cen[1])/100);
            rem = (length.cen[0]+length.cen[1])%100;
      }
      else
            rem = length.cen[0]+length.cen[1];
      printf("The sum is %d meter %d centimeter",sum,rem);
}