#include<stdio.h>

struct str
{
    char name[25];
    int ID;
    float CGPA;
};

void main()
{
    struct str info[100];
    int n,i;
    printf("How many student: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter name: ");
        fflush(stdin);
        gets(info[i].name);
        printf("Enter ID: ");
        scanf("%d",&info[i].ID);
        printf("Enter CGPA: ");
        scanf("%f",&info[i].CGPA);
    }
    for ( i = 0; i < n; i++)
    {
        printf("Student %d: %s",i+1,info[i].name);
        printf("\nStudent Id: 0%d",info[i].ID);
        printf("\nStudent CGPA: %.2f",info[i].CGPA);
    }
}