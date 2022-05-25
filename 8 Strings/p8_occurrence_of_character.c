#include <stdio.h>
int occurrence(char *str, char o)
{
    char *ptr = str;
    int count = 0;

    while (*ptr != '\0')
    {
        if (*ptr == o)
            count++;
        ptr++;
    }
    return count;
}

int main()
{
    char str[30];
    printf("Enter the string\n");
    scanf("%s", str);

    int count = occurrence(str, 'a');
    printf("Occurrence of 'a in string is %d", count);

    return 0;
}