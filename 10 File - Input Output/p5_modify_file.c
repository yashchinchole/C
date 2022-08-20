#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("tp5.txt", "r");

    int n;
    fscanf(ptr, "%d", &n);

    ptr = fopen("tp5.txt", "w");
    fprintf(ptr, "%d", 2 * n);

    fclose(ptr);

    return 0;
}