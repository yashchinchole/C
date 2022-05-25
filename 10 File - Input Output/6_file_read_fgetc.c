#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("t6_demo.txt", "r");
    
    char c;
    c = fgetc(ptr);

    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }

    return 0;
}