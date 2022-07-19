#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    printf("Input n: ");
    scanf("%d",&n);
    (ceil(log2(n)) == floor(log2(n)))? printf("Yes\n") : printf("No\n");
}