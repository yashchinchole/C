#include <stdio.h>
#include <string.h> // Header file 

int main()
{
    char *str = "Yash";
    int a = strlen(str); // Excluding the null character

    printf("The lenght of string is %d\n", a);

    return 0;
}