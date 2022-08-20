#include <stdio.h>

int main()
{
    int marks[10];
    int *ptr = &marks[0];

    if (ptr + 3 == &marks[3])
        printf("ptr + 3 points to the fourth element of pointer which is &marks[3]");
    else
        printf("ptr + 3 do not points to the fourth element of pointer");

    return 0;
}