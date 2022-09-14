#include<stdio.h>

struct base_count
{
    int convert; 
    int base;
    int n;
    int reminder[100];
    char rem[20];
};

struct base_count Get_number_and_base();
struct base_count Convert_number(struct base_count pass1);
struct base_count Show_number(struct base_count pass2);

void main()
{
    struct base_count take1,take2;
    take1 = Get_number_and_base();
    take2 = Convert_number(take1);
    Show_number(take2);
}

struct base_count Get_number_and_base()
{
    struct base_count get_input;
    printf("Enter the number you want to convert: ");
    scanf("%d", &get_input.convert);
    printf("Enter the base number(base must be between 2 and 16): ");
    scanf("%d", &get_input.base);
    if (get_input.base >= 2 && get_input.base <= 16)
        return get_input;
    else
        printf("Base number not in proper range!");
}

struct base_count Convert_number(struct base_count pass1)
{
    int i=0;
    while (pass1.convert != 0)
    {
        pass1.reminder[i] = pass1.convert % pass1.base;
        pass1.convert = pass1.convert/pass1.base;
        if(pass1.reminder[i] == 10)
            pass1.rem[i]='A';
        else if(pass1.reminder[i] == 11)
            pass1.rem[i]='B';
        else if(pass1.reminder[i] == 12)
            pass1.rem[i]='C';
        else if(pass1.reminder[i] == 13)
            pass1.rem[i]='D';
        else if(pass1.reminder[i] == 14)
            pass1.rem[i]='E';
        else if(pass1.reminder[i] == 15)
            pass1.rem[i]='F';
        i++;
    }
    pass1.n = i-1;
    return pass1;
}

struct base_count Show_number(struct base_count pass2)
{
    while (pass2.n >= 0)
    {
        if (pass2.reminder[pass2.n] >= 10 && pass2.reminder[pass2.n] <= 15)
            printf("%c",pass2.rem[pass2.n]);
        else
            printf("%d",pass2.reminder[pass2.n]);
        pass2.n--;
    }
}