// #include<stdio.h>

// void main()
// {
//     int num;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     if (num>0)
//     {
//         if((num!=0)&&((num&(num-1))==0))
//             printf("yes");
//         else
//             printf("no");
//     }
// }
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }
    if(2*n>sum)
        printf("%d is a deficient number..",n);
    else
        printf("%d is not a deficient number..",n);
}