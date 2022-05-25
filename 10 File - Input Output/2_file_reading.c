#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("t2_yash.txt", "r");

    int num, num2;
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);

    fclose(ptr);

    printf("The value of num is %d\n", num);
    printf("The value of num2 is %d\n", num2);

    return 0;
}