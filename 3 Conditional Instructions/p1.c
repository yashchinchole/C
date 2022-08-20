#include <stdio.h>

int main()
{
    int a = 10;

    if (a = 11) // We use "=" and not "==" --> So it prints true always
    {
        printf("I am 11");
    }
    else
    {
        printf("I am not 11");
    }
    return 0;
}