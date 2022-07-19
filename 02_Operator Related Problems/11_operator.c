#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value = ");
    scanf("%d%d%d",&a,&b,&c);

    // Determining no. a

    if ((a+b)<=80 && b>=0)
        printf("\n1) 1");
    else    
        printf("\n1) 0");

        // Determining no. b

            if((a-b)==0 || c!=0)
                printf("\n2) 1");
            else    
                printf("\n2) 0");

            // Determining no. c

                    if (a != b || !(b<c) && c > 0)
                        printf("\n3) 1");
                    else    
                        printf("\n3) 0");

                    // Determining no. d
                            if ((a != b || !(b<c)) && c > 0)
                                printf("\n4) 1");
                            else
                                printf("\n4) 0");    
}