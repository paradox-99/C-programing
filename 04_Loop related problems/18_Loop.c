#include<stdio.h>
#include<conio.h>
int main()
{
    int n,rev=0,rem,org;
    printf("Enter the number = ");
    scanf("%d",&n);
    org = n;
    while (n!=0)
    {
        rem= n%10;
        rev=rev*10+ rem;
        n/=10;
    }
    if ( org == rev)
        printf("Yes");
    else
        printf("No");
}