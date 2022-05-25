#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];

    printf("Enter a string to duplicate\n");
    gets(s);

    strdup(s);

    printf("Double of the string: %s\n", s);

    return 0;
}