#include <stdio.h>

int main()
{
    // // int a = 4;Type declaration instruction
    // int a = 4, b, c;
    // b = c = a;
    // // Order is important
    // printf("The value of a is %d \n", a);
    // printf("The value of b is %d \n", b);
    // printf("The value of c is %d \n", c);

    float a = 1.1;
    float b = a + 8.9;
    // ERROR if we use this (b = a + 8.9) before defining a 
    printf("The value of b is %f ",b);

    return 0;
}