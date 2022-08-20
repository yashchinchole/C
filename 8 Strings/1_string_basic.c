#include <stdio.h>

int main()
{
    // char str[] = {'Y', 'A', 'S', 'H', '\0'};
    // '\0' ==> Null Character;
    char str[] = "YASH";

    printf("Element = %c, ASCII value = %d and Address = %u\n", str[0], str[0], &str[0]);
    printf("Element = %c, ASCII value = %d and Address = %u\n", str[1], str[1], &str[1]);
    printf("Element = %c, ASCII value = %d and Address = %u\n", str[2], str[2], &str[2]);
    printf("Element = %c, ASCII value = %d and Address = %u\n", str[3], str[3], &str[3]);
    printf("Element = %c, ASCII value = %d and Address = %u\n", str[4], str[4], &str[4]);

    return 0;
}