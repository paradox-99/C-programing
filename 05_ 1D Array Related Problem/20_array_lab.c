#include<stdio.h>

void main()
{
    int a[100],b[100],c[100],n,d,i,j,x,m;
    printf("How many numbers: ");
    scanf("%d",&m);
    printf("Enter the numbers: ");
    for(i=0; i<m; i++)
        scanf("%d",&a[i]);
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0; i<n; i++)
        scanf("%d",&b[i]);


    for(i=0; i<m; i++)
    {
        for(j=0;j<n;j++)
        {
            for(x=0; x<m+n; x++)
            {
                if(a[i]==b[j])
                {
                    b[j]=b[j+1];
                    n--;
                }
                else if(a[i]==a[i+1])
                {
                    a[i]=a[i+1];
                    m--;
                }
                // else 
                //     c[x]=a[i];
            }
        }
    }


    // for(i=0; i<m; i++){
    //     for(j=0;j<n;j++){
    //         if(a[j]==b[i]){
    //             break;
    //         }
    //         else if(j==(n-1) && a[j]!=b[i])
    //             printf("%d ",b[i]);
    //     }
    // }
}