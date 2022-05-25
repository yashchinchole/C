#include <stdio.h>

int main()
{
    int i = 0;
    // It executes atleast one (do while loop)
    // First print the program --> then check the condition
    do
    {
        printf("The value of i is %d\n", i);
        ++i;
    } while (i < 5);

    return 0;
}