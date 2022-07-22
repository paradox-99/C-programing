#include<stdio.h>
void main()
{
    int std_num=0,i; float att=0,assig=0,cl_t=0,mid=0,final=0;
    float mid_t_f=0,final_f=0,total_marks=0;
    printf("How many student(s) = ");
    scanf("%d",&std_num);
    i=1;
    while (i<=std_num)
    {
        printf("Attendance marks(Maximum-5): ");
        scanf("%f",&att);
        printf("Assignments marks(Maximum-10): ");
        scanf("%f",&assig);
        printf("Class tests marks(Maximum-15): ");
        scanf("%f",&cl_t);
        printf("Midterm marks(Maximum-50): ");
        scanf("%f",&mid);
        mid_t_f = mid*2*(30/100.0); 
        printf("Term final marks(Maximum-100): ");
        scanf("%f",&final);
        final_f = final*(40/100.0);
        
        total_marks = att + assig + cl_t + mid_t_f + final_f;

        printf("Total marks= %f\n\n",total_marks);

        if (total_marks >= 90 && total_marks <= 100)
            printf("\nStudent %d:A\n",i);
        else if (total_marks >= 86 && total_marks <= 89)
            printf("\nStudent %d:A-\n",i);
        else if (total_marks >= 82 && total_marks <= 85)
            printf("\nStudent %d:B+\n",i);
        else if (total_marks >= 78 && total_marks <= 81)
            printf("\nStudent %d:B\n"),i;
        else if (total_marks >= 74 && total_marks <= 77)
            printf("\nStudent %d:B-\n",i);
        else if (total_marks >= 70 && total_marks <= 73)
            printf("\nStudent %d:C+\n",i);
        else if (total_marks >= 66 && total_marks <= 69)
            printf("\nStudent %d:C\n",i);
        else if (total_marks >= 62 && total_marks <= 65)
            printf("\nStudent %d:C-\n",i);
        else if (total_marks >= 58 && total_marks <= 61)
            printf("\nStudent %d:D+\n",i);
        else if (total_marks >= 55 && total_marks <= 57)
            printf("\nStudent %d:D\n",i);
        else
            printf("\nFail\n");
        
        i++;
    }
}