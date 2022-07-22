#include<stdio.h>

void main()
{
    char ch[100]; int i,count=0,n;
    printf("How many alphabets = ");
    scanf("%d",&n);
    printf("Enter your characters = ");
    for ( i = 0; i < n; i++){
        scanf(" %c",&ch[i]);
        // if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
        //     count++;
        // else if(ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
        //     count++;
    }
    for ( i = 0; i < n; i++)
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
            count++;
        else if(ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
            count++;
    }
    printf("Count = %d",count);
}