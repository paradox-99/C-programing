#include<stdio.h>

void main()
{
    int a[100],i,n,num,pos;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the position: ");
    scanf("%d",&pos);
    for (i = n-1 ; i >= pos ; i--)
        a[i+1]=a[i];
    a[pos]=num;
    for(i=0;i<=n;i++)
        printf("%d\t",a[i]);
}



