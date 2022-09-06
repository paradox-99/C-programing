#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[51];
    int i, j, flag;
 
    printf("Enter 1st string:");
    gets(str1);
    printf("Enter 2nd string:");
    gets(str2);
    for (i = 0; i <= strlen(str1) - strlen(str2); i++)
    {
        for (j = i; j < i + strlen(str2); j++)
        {
            flag = 1;
            if (str1[j] != str2[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("Substring");
    else
        printf("Not Substring");
    return 0;
}