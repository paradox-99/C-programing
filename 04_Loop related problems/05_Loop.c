#include<stdio.h>
#include<math.h>
void main()
{
    int X,Y,c;
    printf("Enter the value of x : ");
    scanf("%d",&X);
    printf("\nEnter the value of y: ");
    scanf("%d",&Y);

    if(X<Y)
    {
        for ( X; X<Y; X++)
        {
            c=pow(X,2);
            printf(" %d",c);
            printf(",");
        }
        printf(" Reached");
    }
    else if(X>Y){
       for ( X; X>Y; X--)
        {
            c=pow(X,2);
            printf(" %d",c);
            printf(",");
        }
        printf(" Reached");
    } 
    else
    {
        printf(" Reached");
    }
}
   