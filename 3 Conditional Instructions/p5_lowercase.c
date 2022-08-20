#include <stdio.h>

int main()
{
    char c; // It is ASCII value

    printf("Enter the character \n");
    scanf("%c", &c); // [lowercase >=97 & <=122] - [UPPERCASE >=65 & <=90]

    if (c >= 97 && c <= 122) 
    {
        printf("The character is Lowercase");
    }
    else
    {
        printf("The character is NOT Lowercase");
    }
    return 0;
}