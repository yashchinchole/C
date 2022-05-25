#include <stdio.h>

int main()
{
    float marks[] = {2.3, 4.3, 4.87};
    printf("The value of marks[0] is %.1f\n", marks[0]);
    printf("The value of marks[1] is %.1f\n", marks[1]);
    printf("The value of marks[2] is %.1f\n", marks[2]);

    printf("Address of marks[0] is %u\n", &marks[0]);
    printf("Address of marks[1] is %u\n", &marks[1]);
    printf("Address of marks[2] is %u\n", &marks[2]);
    return 0;
}