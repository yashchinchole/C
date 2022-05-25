#include <stdio.h>

int main()
{
    FILE *ptr;
    int num, num2;
    ptr = fopen("tq1_yash.txt", "r");
    // ptr = fopen("tq1_prasad.txt", "r");

    if (ptr == NULL)
        printf("This file does not exit\n");
    else
    {
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);

        fclose(ptr);

        printf("The value of num is %d\n", num);
        printf("The value of num2 is %d\n", num2);
    }
    return 0;
}