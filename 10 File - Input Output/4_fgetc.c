#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("t4_getcdemo.txt", "r");
    // char c = fgetc(ptr);
    // fgetc --> for reading a file character by character

    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));

    fclose(ptr);

    return 0;
}