#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Prasad";
    char target[33];

    strcpy(target, source);
    
    printf("source string is %s\n", source);
    printf("target string is %s\n", target);

    return 0;
}