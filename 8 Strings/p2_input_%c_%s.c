#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30];
    char str2[30];
    char c;
    int i = 0;

    printf("Enter the string 1 \n");
    scanf("%s", str1);

    printf("Enter the string 2, character by character\n");
    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
    str2[i - 1] = '\0';

    printf("The value of str1 is %s\n", str1);
    printf("The value of str2 is %s\n", str2);

    strcmp(str1, str2);
    
    if (strcmp(str1, str2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are different");

    return 0;
}