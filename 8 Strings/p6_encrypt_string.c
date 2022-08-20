#include <stdio.h>
void encrypt(char *s)
{
    char *ptr = s;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main()
{
    char s[30]; // not use this --> char *s = "Yash";
    printf("Enter the string\n");
    scanf("%s", s);

    encrypt(s);

    printf("The encrypted value is %s\n", s);

    return 0;
}