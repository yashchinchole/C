#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30] = "Yash";
    char s2[] = "Prasad";

    int value1 = strcmp(s1, "Yash");
    int value2 = strcmp(s1, s2);
    int value3 = strcmp(s1, "Zach");

    printf("Now the value of strings are %d %d %d\n", value1, value2, value3);

    return 0;
}