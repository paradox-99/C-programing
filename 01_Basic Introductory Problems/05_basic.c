#include<stdio.h>
int main()
{
    int i_num_1;
    float f_num_1=10;
    double d_num_1=5,d_num_2=10,d_num_3=15.785;
    char c_var_1='n',c_var_2='n',c_var_3='n';
    printf("Uninitialized variable is = i_num_1 \n");
    printf("Initialized variable is f_num_1 = %.3f \n",f_num_1);
    printf("Initialized multiple variable is d_num_1 = %.3lf\t d_num_2 = %.3lf\t d_num_3 = %.3lf \n",d_num_1,d_num_2,d_num_3);
    printf("Initialized multiple variable with same value is c_var_1 = %d bc_var_2 = %d c_var_3 = %d",c_var_1,c_var_2,c_var_3);

    return 0; 
}