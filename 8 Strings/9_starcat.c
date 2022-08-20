#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30] = "Yash";
    char *s2 = "Prasad";

    strcat(s1, s2);
    
    printf("Now the s1 is %s", s1);

    return 0;
}