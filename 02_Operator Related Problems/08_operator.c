#include<stdio.h>
void main()
{
    int num_1,num_2,max_num;
    printf("Input the value = ");
    scanf("%d%d",&num_1,&num_2);
    max_num=(num_1>num_2) ? num_1:num_2;
    printf("Max = %d",max_num);
}