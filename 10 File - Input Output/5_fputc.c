#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("t5_putcdemo.txt", "w");

    putc('Y', ptr);
    putc('a', ptr);
    putc('s', ptr);
    putc('h', ptr);

    fclose(ptr);

    return 0;
}