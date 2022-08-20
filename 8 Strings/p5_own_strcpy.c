#include <stdio.h>
void copy(char *s2, char *s1)
{
    while (*s1 != '\0')
    {
        *s2 = *s1;
        s1++;
        s2++;
    }
    *s2 = '\0';
}

int main()
{
    char s1[30];
    printf("Enter the string\n");
    scanf("%s", s1);

    char s2[30];

    copy(s2, s1);

    printf("s1 string is %s\n", s1);
    printf("s2 string is %s\n", s2);

    return 0;
}