#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    printf("Input n: ");
    scanf("%d",&n);
    if(n<0)
        printf("Negative input is not valid.");
    else if (n!=0)
        (ceil(log2(n)) == floor(log2(n)))? printf("Yes\n") : printf("No\n");
    else
        printf("Zero is not a valid input.");
}