#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Inprut the value of a,b and c = ");
    scanf("%d%d%d",&a,&b,&c);

    // Determining no. a

    if ((a+b) <= 80)
        printf("\n1) 1");
    else
        printf("\n1) 0");

    // Determining no. b

        if (!(a+c))
            printf("\n2) 1");
        else
            printf("\n2) 0");

    // Determining no. c

            if (a != 0)
                printf("\n3) 1");
            else
                printf("\n3) 0");
}