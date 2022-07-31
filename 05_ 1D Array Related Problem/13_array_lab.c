#include<stdio.h>

void main()
{
    int a[100],i,n,num,pos;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("Enter the position: ");
    scanf("%d",&pos);
    i=0;
    while(i!=pos)
        i++;
    for ( ; i<n; i++)
        a[i]=a[i+1];
    n--;
    for(i=0; i<n; i++)
        printf("%d\t",a[i]);
}