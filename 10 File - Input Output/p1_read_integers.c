#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("tp1.txt", "r");

    int n1, n2, n3;
    fscanf(ptr, "%d %d %d", &n1, &n2, &n3);

    fclose(ptr);

    printf("The numbers are %d %d %d\n", n1, n2, n3);

    return 0;
}