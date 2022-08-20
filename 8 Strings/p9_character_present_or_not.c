#include <stdio.h>
int present(char *str, char c)
{
    char *ptr = str;

    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            return 1;
            break;
        }
        ptr++;
    }
}

int main()
{
    char str[30];
    printf("Enter the string\n");
    scanf("%s", str);

    int value = present(str, 'c');
    printf("%d\n", value);

    if (value == 1)
        printf("Character is present\n");
    else
        printf("Character is not present\n");

    return 0;
}