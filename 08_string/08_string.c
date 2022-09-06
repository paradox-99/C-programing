#include <stdio.h>

int main()
{

	char s1[20], s2[20];
    int flag=0,i;
    printf("Enter 1st string: ");
    gets(s1);
    printf("Enter 1st string: ");
    fflush(stdin);
    gets(s2);

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
		if (s1[i] < s2[i]) {
			puts(s1);
			return 0;
		}
		else if (s2[i] < s1[i]) {
			puts(s2);
			return 0;
		}
	}
	if (s1[i] != '\0') {
		puts(s1);
	}
	else if (s2[i] != '\0') {
		puts(s2);
	}
	else {
		printf("Both strings are lexicographically equal");
	}
    return 0;
}
