#include <stdio.h>
int strlenght(char *str)
{
    char *ptr = str;
    int lenght = 0;
    while (*ptr != '\0')
    {
        ptr++;
        lenght++;
    }
    return lenght;
}

int main()
{
    char str[] = "Yash";
    int l = strlenght(str);
    printf("The length of string is %d", l);

    return 0;
}