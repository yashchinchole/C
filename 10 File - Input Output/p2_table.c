#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("tp2.txt", "w");

    int n;
    printf("Enter the number\n");
    scanf("%d", &n);

    fprintf(ptr, "Table of %d ==>\n\n", n);
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d x %d = %d\n", n, i, n * i);
    }

    fclose(ptr);

    return 0;
}