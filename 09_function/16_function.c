#include<stdio.h>

void str_length(char a[], char b[]);
int find_substr(char a[], char b[]);
int count[2];

void main()
{
    char str1[100], str2[51];
    int i, j, flag;
    printf("Enter 1st string:");
    gets(str1);
    printf("Enter 2nd string:");
    gets(str2);
    str_length( str1, str2);
    flag = find_substr(str1,str2);
    if (flag == 1)
        printf("Substring");
    else
        printf("Not Substring");
}

void str_length(char a[], char b[])
{
    int i=0;
    while (a[i] != '\0')
    {
        count[0]++;
        i++;
    }
    i=0;
    while (b[i] != '\0')
    {
        count[1]++;
        i++;
    }
}

int find_substr(char a[], char b[])
{
    int i,j,flag;
    for (i = 0; i <= count[0] - count[1]; i++)
    {
        for (j = i; j < i + count[1]; j++)
        {
            flag = 1;
            if (a[j] != b[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    return flag;
}