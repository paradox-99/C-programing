#include<stdio.h>
#include<string.h>

int find_substr(char a[], char b[]);

void main()
{
    char str1[100], str2[51];
    int i, j, flag;
    printf("Enter 1st string:");
    gets(str1);
    printf("Enter 2nd string:");
    gets(str2);
    flag = find_substr(str1,str2);
    if (flag == 1)
        printf("Substring");
    else
        printf("Not Substring");
}

int find_substr(char a[], char b[])
{
    int i,j,flag;
    for (i = 0; i <= strlen(a) - strlen(b); i++)
    {
        for (j = i; j < i + strlen(b); j++)
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