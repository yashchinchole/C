#include <stdio.h>

int main()
{
    char name[32];
    printf("Enter your name\n");
    gets(name);
    printf("%s\n", name);
    puts(name);

    return 0;
}