#include<stdio.h>
int def_var=15;
void main()
{
    printf("Global= %d \n",def_var);
    float def_var=10;
    printf("Local= %.0f\n",def_var);
    {
    extern int def_var;
    printf("Global= %d",def_var);
    }
}
