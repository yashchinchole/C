#include <stdio.h>

int main()
{
    // char ptr[] = "Yash"; // --> { Cannot be reinitialized to something else }
    // ptr = "Prasad";
    // printf("%s", ptr);

    char *ptr = "Yash"; // --> { It can be reinitialized by using pointers}
    ptr = "Prasad";
    printf("%s", ptr);

    return 0;
}