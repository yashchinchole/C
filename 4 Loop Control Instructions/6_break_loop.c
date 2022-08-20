#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 10)
    {
        if (i == 5)
            break;

        printf("The value of i is %d\n", i);
        i++;
    }
    return 0;
}