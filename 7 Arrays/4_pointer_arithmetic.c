#include <stdio.h>

int main()
{
    int i = 24; // int increment value by (4 bytes)
    int *ptr = &i;
    printf("The value of ptr is %d\n", ptr);
    ptr++;
    printf("The value of ptr is %d\n", ptr);

    float a = 3.4; // float increment value by (4 bytes)
    float *fla = &a;
    printf("The value of fla is %d\n", fla);
    fla++;
    printf("The value of fla is %d\n", fla);

    char n = 'A'; // char increment value by (1 byte)
    char *ch = &n;
    printf("The value of ch is %d\n", ch);
    ch++;
    printf("The value of ch is %d\n", ch);

    return 0;
}