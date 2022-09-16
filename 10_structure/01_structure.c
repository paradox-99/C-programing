#include<stdio.h>

struct str
{
    char name[25];
    int ID;
    float CGPA;
};

void main()
{
    struct str info;
    printf("Enter name: ");
    gets(info.name);
    printf("Enter ID: ");
    scanf("%d",&info.ID);
    printf("Enter CGPA: ");
    scanf("%f",&info.CGPA);

    printf("Name: %s",info.name);
    printf("\nId: 0%d",info.ID);
    printf("\nCGPA: %.2f",info.CGPA);
}