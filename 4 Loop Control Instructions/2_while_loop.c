#include <stdio.h>

int main()
{
    int a;
    scanf("%d\n", &a);
    // First check the condition --> then PRINT the program

    while (a < 10)
    {
        printf("%d\n", a);
        a++; // a++ => a = a + 1
    }

    return 0;
}