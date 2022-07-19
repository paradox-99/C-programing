#include<stdio.h>

void main()
{
    char character;
    printf("Enter your Character: ");
    scanf("%c",&character);
    if(character>='A' && character<='Z' || character>='a' && character<='z')
        printf("Alphabet");
    else if(character>='0' && character<= '9')
        printf("Digit");
    else
        printf("Special");
}