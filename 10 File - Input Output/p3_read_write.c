#include <stdio.h>

int main()
{
    FILE *a;
    a = fopen("tp3_read.txt", "r");

    FILE *b;
    b = fopen("tp3_write.txt", "w");

    char c = fgetc(a);
    while (c != EOF)
    {
        fputc(c, b);
        c = fgetc(a);
    }

    fclose(a);
    fclose(b);

    return 0;
}