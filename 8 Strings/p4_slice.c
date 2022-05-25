#include <stdio.h>
void slice(char *str, int m, int n)
{
    int i = 0;
    while ((i + m) < n)
    {
        str[i] = str[i + m];
        i++;
    }
    str[i] = '\0';
}

int main()
{
    char str[30];
    printf("Enter the string\n");
    scanf("%s", str);

    slice(str, 2, 6);
    printf("Slice is %s", str);

    return 0;
}