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
void decrypt(char *s)
{
    char *ptr = s;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char s[30];
    printf("Enter the string\n");
    scanf("%s", s);

    // encrypt(s);
    decrypt(s);

    printf("The decrypted value is %s\n", s);

    return 0;
}