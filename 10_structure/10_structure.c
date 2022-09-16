#include<stdio.h>

struct count
{
     int met, cen;
};

void main()
{
     struct count length;
     printf("Enter length in meter: ");
     scanf("%d",&length.met);
     printf("Enter length in centimeter: ");
     scanf("%d",&length.cen);
     printf("Length in meter: %d.%d",length.met,length.cen);
     printf("\nLength in centimeter: %d",(100*length.met)+length.cen);
}